// P40_例3.9.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// n个人中选出k个人组成委员会的组合问题——递归
// 组合递推的公式 C(n,k)=C((n-1),(k-1))+C((n-1),k)

#include <iostream>
using namespace std;

int comm(int n, int k)
{
	if (k > n) // 候选人数量大于总人数
		return 0; // 不合逻辑
	else if (n == k || k == 0) // 候选人数量为0或者所有人都是候选人
		return 1; // 只有一种情况
	else
		return comm(n - 1, k) + comm(n - 1, k - 1);
}
int main()
{
	int n, k;
	cout << "Please enter two intergers n and k:";
	cin >> n >> k;
	cout << "C(n,k)=" << comm(n, k) << endl;
	return 0;
}


