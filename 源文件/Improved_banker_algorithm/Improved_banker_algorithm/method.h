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

//��Դ�����(Resource allocation table)
typedef struct RAT {
	int CNum = 0;  // �ͻ���Ŀ
	vector<string> CName;  // �ͻ���������

	int RNum = 0;  // ��Դ�����Ŀ
	vector<int> RUpper; //��Դ��������
	vector<string> RName;  // ��Դ��������

	vector<vector<int>> Allocation;  // �ѷ�����Դ����
	vector<vector<int>> Need;  // ������Դ����
	vector<vector<int>> Max;  // ����������
	vector<vector<int>> TOccupy; //��Դռ��ʱ�����

	vector<int> Available;  // ��������Դ��Ŀ����
	vector<int> Request; // ��Դ��������

	vector<vector<int>> SafeList; // ��ȫ����
	vector<int> Mutex; // ����������֤���̰���˳�����

	vector<vector<int>> Serve_State; // �������Ѿ������״̬
	vector<bool> Finish; //�������Ƿ����
	bool Allow_to_run = true; //�߳��Ƿ��������
}RAT;

class method {
public:
	method(int a = 0, int b = 0);
	~method();

	void SetCNum(int); //���ÿͻ���Ŀ
	void SetRNum(int); //������Դ�����Ŀ
	void SetAllowToRun(bool); //�����Ƿ��������
	void Clear(void); //�������
	void SetRequest(int, int, int); //������������
	void RandomSetRequest(void); //���������������

	void RGM(void); //�������ģ��(Randomly generated module)
	vector<string> ADM(void); //�ɷ�����ģ��(Assignable detection module)

	void SDM(void); //��ȫ�Լ��ģ��(Security detection module)
	void DFS(RAT&, vector<int>, vector<bool>); //������Ѱ��ȫ����

	void SSSM(void); //��ȫ��������ģ��(Security sequence sorting module)
	int CRUE(vector<int>); //������Դ����Ч��(Computing resource utilization efficiency)

	void MSM(void); //���̷߳���ģ��(Multithread service module)
	static void Serve(method *, int,int); //�̷߳���
	static void CreateThread(method*); //�����߳�

	RAT Get_Rat(void); //��ȡ��Դ�����

	string Get_Serve_State_Show(void); //��ʾ����״̬
	string Get_SafeList_Show(void); //��ʾ��ȫ����
	string Get_Request_Show(void); //��ʾ��������
	string Get_Available_Show(void); //��ʾ��������Դ����
	string Get_Allocated_Show(void); //��ʾ�������
	string Get_Need_Show(void); //��ʾ�������
	string Get_TOccupy_Show(void); //��ʾռ��ʱ��

private:
	RAT rat; //��Դ�����
};
