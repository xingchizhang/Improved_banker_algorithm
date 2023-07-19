#include "method.h"
using namespace std;

method::method(int a, int b)
{
	rat.CNum = a;
	rat.RNum = b;
}

method::~method()
{
}

void method::SetCNum(int a)
{
	rat.CNum = a;
}

void method::SetRNum(int b)
{
	rat.RNum = b;
}

void method::SetAllowToRun(bool flag)
{
	rat.Allow_to_run = flag;
}

// 随机生成模块(Randomly generated module)
void method::RGM(void)
{
	//客户名称生成
	for (int i = 0; i < rat.CNum; i++) {
		rat.CName.push_back("C" + to_string(i));
	}
	//资源名称生成
	for (int i = 0; i < rat.RNum; i++) {
		rat.RName.push_back("R" + to_string(i));
	}
	srand((unsigned)time(NULL));
	//随机数范围设计[a, b]
	int a = 10;
	int b = 20;
	//已分配资源生成[10, 20]
	for (int i = 0; i < rat.CNum; i++) {
		vector<int> q;
		for (int j = 0; j < rat.RNum; j++) {
			a = 10;
			b = 20;
			int k = (rand() % (b - a + 1)) + a;
			q.push_back(k);
		}
		rat.Allocation.push_back(q);
	}
	//需求资源生成[10, 20]
	for (int i = 0; i < rat.CNum; i++) {
		vector<int> q;
		for (int j = 0; j < rat.RNum; j++) {
			a = 10;
			b = 20;
			int k = (rand() % (b - a + 1)) + a;
			q.push_back(k);
		}
		rat.Need.push_back(q);
	}
	//最大需求矩阵生成
	for (int i = 0; i < rat.CNum; i++) {
		vector<int> q;
		for (int j = 0; j < rat.RNum; j++) {
			int k = rat.Allocation[i][j] + rat.Need[i][j];
			q.push_back(k);
		}
		rat.Max.push_back(q);
	}
	//可利用资源数目生成[15, 30]
	a = 15;
	b = 30;
	for (int i = 0; i < rat.RNum; i++) {
		int j = (rand() % (b - a + 1)) + a;
		rat.Available.push_back(j);
	}
	//资源上限生成
	for (int i = 0; i < rat.RNum; i++) {
		int sum = rat.Available[i];
		for (int j = 0; j < rat.CNum; j++) {
			sum = sum + rat.Allocation[j][i];
		}
		rat.RUpper.push_back(sum);
	}
	//资源占用时间生成[3, 10]
	for (int i = 0; i < rat.CNum; i++) {
		vector<int> q;
		for (int j = 0; j < rat.RNum; j++) {
			a = 3;
			b = 10;
			int k = (rand() % (b - a + 1)) + a;
			q.push_back(k);
		}
		rat.TOccupy.push_back(q);
	}
	//默认请求进程为C0，资源请求都为0
	for (int i = 0; i <= rat.RNum; i++) {
		rat.Request.push_back(0);
	}
	//服务状态为0（未开始服务）
	for (int i = 0; i < rat.CNum; i++) {
		vector<int> q;
		for (int j = 0; j < rat.RNum; j++) {
			q.push_back(0);
		}
		rat.Serve_State.push_back(q);
	}
	//默认所有进程都未完成
	for (int i = 0; i < rat.CNum; i++) {
		rat.Finish.push_back(false);
	}
}

// 可分配检测模块(Assignable detection module)
vector<string> method::ADM(void)
{
	vector<string> ans(2); //0:是否可以分配(Yes or No), 1:显示字符串
	ans[0] = "Yes";
	ans[1] = "Available:\t";
	for (int i = 0; i < rat.RNum; i++) {
		string str = "";
		if (rat.Request[i + 1] < rat.Available[i]) {
			str = "<";
		}
		else if (rat.Request[i + 1] == rat.Available[i]) {
			str = "=";
		}
		else {
			str = ">";
			ans[0] = "No";
		}
		ans[1] = ans[1] + "R" + to_string(i) + ":" + to_string(rat.Request[i + 1]) + str + to_string(rat.Available[i]) + "\t";
	}
	ans[1] += "\nNeed:\t";
	for (int i = 0; i < rat.RNum; i++) {
		string str = "";
		if (rat.Request[i + 1] < rat.Need[rat.Request[0]][i]) {
			str = "<";
		}
		else if (rat.Request[i + 1] == rat.Need[rat.Request[0]][i]) {
			str = "=";
		}
		else {
			str = ">";
			ans[0] = "No";
		}
		ans[1] = ans[1] + "R" + to_string(i) + ":" + to_string(rat.Request[i + 1]) + str + to_string(rat.Need[rat.Request[0]][i]) + "\t";
	}
	if (ans[0]._Equal("Yes")) {
		ans[1] = "检测结果：通过\n" + ans[1];
	}
	else {
		ans[1] = "检测结果：未通过\n" + ans[1];
	}
	return ans;
}

// 计算资源利用效率(Computing resource utilization efficiency)
bool compare_CRUE(vector<int> a, vector<int> b) {
	return a[0] > b[0];
}
int method::CRUE(vector<int> ans)
{
	vector<int> now_available(rat.Available);
	vector<vector<int>> time_resource; //0:占用时间, 1:占用资源, 2:占用数目
	for (int i = 0; i < rat.RNum; i++) {
		vector<int> c;
		c.push_back(rat.TOccupy[ans[0]][i]);
		c.push_back(i);
		c.push_back(rat.Allocation[ans[0]][i] + rat.Need[ans[0]][i]);
		now_available[i] -= rat.Need[ans[0]][i];
		time_resource.push_back(c);
	}
	// 由时间先后逐渐释放资源（占用时间越短，排序越靠后，从后向前释放）
	sort(time_resource.begin(), time_resource.end(), compare_CRUE);
	int k = 1;
	if (k == rat.CNum) {
		return time_resource[0][0];
	}
	while (true) {
		// 释放资源
		now_available[time_resource.back()[1]] += time_resource.back()[2];
		// 记录时间
		int time = time_resource.back()[0];
		// 弹出占用块
		time_resource.pop_back();
		// 判断是否满足下一进程
		bool flag = true;
		for (int i = 0; i < rat.RNum; i++) {
			if (now_available[i] < rat.Need[ans[k]][i]) {
				flag = false;
				break;
			}
		}
		if (flag) {
			// 添加占用块
			for (int i = 0; i < rat.RNum; i++) {
				vector<int> c;
				c.push_back(rat.TOccupy[ans[k]][i] + time);
				c.push_back(i);
				c.push_back(rat.Allocation[ans[k]][i] + rat.Need[ans[k]][i]);
				now_available[i] -= rat.Need[ans[k]][i];
				time_resource.push_back(c);
			}
			// 排序
			sort(time_resource.begin(), time_resource.end(), compare_CRUE);
			k = k + 1;
			// 所有进程全都进入服务后，返回最长时间
			if (k == rat.CNum) {
				return time_resource[0][0];
			}
		}
	}
}

// 安全序列排序模块(Security sequence sorting module)
bool compare_SSSM(vector<int> a, vector<int> b) {
	return a.back() < b.back();
}
void method::SSSM(void)
{
	// 计算资源利用效率
	for (int i = 0; i < rat.SafeList.size(); i++) {
		rat.SafeList[i].push_back(CRUE(rat.SafeList[i]));
	}
	// 按照资源利用效率进行排序
	sort(rat.SafeList.begin(), rat.SafeList.end(), compare_SSSM);
}

// 安全性检测模块(Security detection module)
void method::SDM(void)
{
	// 清空过时缓存
	rat.SafeList.clear();
	// 尝试分配
	RAT rat_test = rat;
	for (int i = 0; i < rat_test.RNum; i++) {
		rat_test.Allocation[rat_test.Request[0]][i] += rat_test.Request[i + 1];
		rat_test.Need[rat_test.Request[0]][i] -= rat_test.Request[i + 1];
		rat_test.Available[i] -= rat_test.Request[i + 1];
	}
	vector<bool> Finish_test(rat.CNum, false);
	vector<int> ans;
	// 找寻所有安全序列
	DFS(rat_test, ans, Finish_test);
	// 确认分配
	if (!rat_test.SafeList.empty()) {
		for (int i = 0; i < rat.RNum; i++) {
			rat.Allocation[rat.Request[0]][i] += rat.Request[i + 1];
			rat.Need[rat.Request[0]][i] -= rat.Request[i + 1];
			rat.Available[i] -= rat.Request[i + 1];
		}
		rat.SafeList = rat_test.SafeList;
	}
	// 安全序列排序
	SSSM();
}
void method::DFS(RAT& rat_test, vector<int> ans, vector<bool> Finish_test)
{
	if (rat_test.SafeList.size() == 100) { //最多存储100个安全序列
		return;
	}
	if (ans.size() == rat_test.CNum) { //找寻到一个安全序列
		rat_test.SafeList.push_back(ans);
		return;
	}
	vector<int> order; //打乱访问
	for (int i = 0; i < rat_test.CNum; i++) {
		order.push_back(i);
	}
	shuffle(order.begin(), order.end(), std::mt19937{ std::random_device{}() });
	for (int i = 0; i < rat_test.CNum; i++) {
		if (!Finish_test[order[i]]) { //当前进程未完成
			bool flag = true;
			for (int j = 0; j < rat_test.RNum; j++) { //判断是否可以对其服务
				if (rat_test.Need[order[i]][j] > rat_test.Available[j]) {
					flag = false;
					break;
				}
			}
			if (flag) {
				for (int j = 0; j < rat_test.RNum; j++) { //开展服务，更新可利用资源向量
					rat_test.Available[j] += rat_test.Allocation[order[i]][j];
				}
				Finish_test[order[i]] = true; //更新进程状态
				ans.push_back(order[i]); //保存进程

				DFS(rat_test, ans, Finish_test); //深搜

				ans.pop_back(); //回退进程
				Finish_test[order[i]] = false; //回退进程状态
				for (int j = 0; j < rat_test.RNum; j++) { //回退所做操作
					rat_test.Available[j] -= rat_test.Allocation[order[i]][j];
				}
			}
		}
	}
}

mutex mutex2; // 临界区互斥
void method::Serve(method* W, int q/*进程在安全序列中的下标*/, int R)
{
	//获取进程号
	int C = W->rat.SafeList[0][q]; 
	//分配资源
	W->rat.Available[R] -= W->rat.Need[C][R];
	W->rat.Allocation[C][R] += W->rat.Need[C][R];
	W->rat.Need[C][R] = 0;
	//资源已经获取完成
	mutex2.lock();
	W->rat.Mutex[q + 1] += 1;
	mutex2.unlock();
	//服务当前线程
	for (int i = 0; i < W->rat.TOccupy[C][R]; i++) {
		while (!W->rat.Allow_to_run);
		Sleep(1000);
		W->rat.Serve_State[C][R]++;
	}
	//回收资源
	W->rat.Available[R] += W->rat.Allocation[C][R];
	W->rat.Allocation[C][R] = 0;
}
void method::CreateThread(method* W) {
	//创建线程 
	for (int q = 0; q < W->rat.CNum; q++) {
		//判断上一进程是否已经开始服务
		while (W->rat.Mutex[q] < W->rat.RNum);
		//判断当前资源是否满足需求
		int C = W->rat.SafeList[0][q];
		while (true) {
			bool flag = true;
			for (int R = 0; R < W->rat.RNum; R++) {
				if (W->rat.Available[R] < W->rat.Need[C][R]) {
					flag = false;
					break;
				}
			}
			if (flag)
				break;
		}
		for (int R = 0; R < W->rat.RNum; R++) {
			thread t1(W->Serve, W, q, R);
			t1.detach();
		}
	}
}

// 多线程服务模块(Multithread service module)
void method::MSM(void)
{
	//互斥锁（用于操作同步）
	for (int i = 0; i <= rat.CNum; i++) {
		if (i == 0) {
			rat.Mutex.push_back(rat.RNum); // 所有资源已就绪
		}
		else {
			rat.Mutex.push_back(0);
		}
	}
	thread t(CreateThread, this);
	t.detach();
}

string method::Get_Serve_State_Show(void)
{
	string ans = "";
	for (int i = 0; i < rat.CNum; i++) {
		int c = rat.SafeList[0][i];
		int sum1 = 0;
		int sum2 = 0;
		ans = ans + rat.CName[c] + ":\t";
		for (int j = 0; j < rat.RNum; j++) {
			ans = ans + "R" + to_string(j) + ":" + to_string(rat.TOccupy[c][j]) + "-" + to_string(rat.Serve_State[c][j]) + "\t";
			sum1 += rat.TOccupy[c][j];
			sum2 += rat.Serve_State[c][j];
		}
		float pro = sum2 * 100.0 / sum1;
		string str = to_string(round(pro * 100) / 100);
		ans = ans + str.substr(0, str.find(".") + 3) + "%\n\n";
		if (sum2 == sum1) {
			rat.Finish[i] = true;
		}
	}
	return ans;
}

string method::Get_SafeList_Show(void)
{
	string ans;
	ans = "";
	for (int i = 0; i < rat.SafeList.size(); i++) {
		ans = ans + to_string(i + 1) + ":\t";
		int j = 0;
		for (; j < rat.SafeList[i].size() - 1; j++) {
			ans = ans + "C" + to_string(rat.SafeList[i][j]) + "->";
		}
		ans = ans + "Time: " + to_string(rat.SafeList[i][j]) + "\n";
	}
	if (!rat.SafeList.empty()) {
		ans = "检测结果：通过\n" + ans;
	}
	else {
		ans = "检测结果：未通过\n" + ans;
	}
	return ans;
}

void method::Clear(void)
{
	rat.CNum = 0;
	rat.CName.clear();
	rat.RNum = 0;
	rat.RName.clear();
	rat.Allocation.clear();
	rat.Need.clear();
	rat.Max.clear();
	rat.Available.clear();
	rat.Request.clear();
	rat.RUpper.clear();
	rat.TOccupy.clear();
	rat.SafeList.clear();
	rat.Mutex.clear();
	rat.Serve_State.clear();
	rat.Finish.clear();
	rat.Allow_to_run = true;
}

void method::SetRequest(int a, int b, int c)
{
	rat.Request[0] = a;
	rat.Request[b + 1] = c;
}

void method::RandomSetRequest(void)
{
	srand((unsigned)time(NULL));
	int a = 0;
	int b = rat.CNum - 1;
	rat.Request[0] = (rand() % (b - a + 1)) + a;
	for (int i = 1; i <= rat.RNum; i++) {
		a = 0;
		b = 7;
		if (rat.CNum >= 7) {
			b = 5;
		}
		rat.Request[i] = (rand() % (b - a + 1)) + a;
	}
}

RAT method::Get_Rat(void)
{
	return rat;
}

string method::Get_Request_Show(void)
{
	string ans = "";
	for (int i = 0; i <= rat.RNum; i++) {
		if (i == 0) {
			ans = ans + "C" + to_string(rat.Request[i]) + ":\t";
		}
		else {
			ans = ans + rat.RName[i - 1] + "-" + to_string(rat.Request[i]) + "\t";
		}
	}
	return ans;
}

string method::Get_Available_Show(void)
{
	string ans = "";
	for (int i = 0; i < rat.RNum; i++) {
		ans = ans + rat.RName[i] + "-" + to_string(rat.Available[i]) + "\t";
	}
	return ans;
}

string method::Get_Allocated_Show(void)
{
	string ans = "";
	for (int i = 0; i < rat.CNum; i++) {
		ans = ans + rat.CName[i] + ":\t";
		for (int j = 0; j < rat.RNum; j++) {
			ans = ans + rat.RName[j] + "-" + to_string(rat.Allocation[i][j]) + "\t";
		}
		ans += "\n";
	}
	return ans;
}

string method::Get_Need_Show(void)
{
	string ans = "";
	for (int i = 0; i < rat.CNum; i++) {
		ans = ans + rat.CName[i] + ":\t";
		for (int j = 0; j < rat.RNum; j++) {
			ans = ans + rat.RName[j] + "-" + to_string(rat.Need[i][j]) + "\t";
		}
		ans += "\n";
	}
	return ans;
}

string method::Get_TOccupy_Show(void)
{
	string ans = "";
	for (int i = 0; i < rat.CNum; i++) {
		ans = ans + rat.CName[i] + ":\t";
		for (int j = 0; j < rat.RNum; j++) {
			ans = ans + rat.RName[j] + "-" + to_string(rat.TOccupy[i][j]) + "\t";
		}
		ans += "\n";
	}
	return ans;
}

