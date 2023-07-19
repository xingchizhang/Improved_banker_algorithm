#pragma once

#include "vector"
#include "string"
#include "windows.h"
#include "algorithm"
#include "time.h"
#include "random"
#include "thread"
#include "mutex"

using namespace std;

//资源分配表(Resource allocation table)
typedef struct RAT {
	int CNum = 0;  // 客户数目
	vector<string> CName;  // 客户名称向量

	int RNum = 0;  // 资源类别数目
	vector<int> RUpper; //资源上限向量
	vector<string> RName;  // 资源名称向量

	vector<vector<int>> Allocation;  // 已分配资源矩阵
	vector<vector<int>> Need;  // 需求资源矩阵
	vector<vector<int>> Max;  // 最大需求矩阵
	vector<vector<int>> TOccupy; //资源占用时间矩阵

	vector<int> Available;  // 可利用资源数目向量
	vector<int> Request; // 资源请求向量

	vector<vector<int>> SafeList; // 安全序列
	vector<int> Mutex; // 互斥锁（保证进程按照顺序服务）

	vector<vector<int>> Serve_State; // 各进程已经服务的状态
	vector<bool> Finish; //各进程是否完成
	bool Allow_to_run = true; //线程是否被允许服务
}RAT;

class method {
public:
	method(int a = 0, int b = 0);
	~method();

	void SetCNum(int); //设置客户数目
	void SetRNum(int); //设置资源类别数目
	void SetAllowToRun(bool); //设置是否允许服务
	void Clear(void); //清楚内容
	void SetRequest(int, int, int); //设置请求向量
	void RandomSetRequest(void); //随机设置请求向量

	void RGM(void); //随机生成模块(Randomly generated module)
	vector<string> ADM(void); //可分配检测模块(Assignable detection module)

	void SDM(void); //安全性检测模块(Security detection module)
	void DFS(RAT&, vector<int>, vector<bool>); //深搜找寻安全序列

	void SSSM(void); //安全序列排序模块(Security sequence sorting module)
	int CRUE(vector<int>); //计算资源利用效率(Computing resource utilization efficiency)

	void MSM(void); //多线程服务模块(Multithread service module)
	static void Serve(method *, int,int); //线程服务
	static void CreateThread(method*); //创建线程

	RAT Get_Rat(void); //获取资源分配表

	string Get_Serve_State_Show(void); //显示服务状态
	string Get_SafeList_Show(void); //显示安全序列
	string Get_Request_Show(void); //显示请求向量
	string Get_Available_Show(void); //显示可利用资源向量
	string Get_Allocated_Show(void); //显示分配矩阵
	string Get_Need_Show(void); //显示需求矩阵
	string Get_TOccupy_Show(void); //显示占用时间

private:
	RAT rat; //资源分配表
};
