// experiment_2_2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// x的数据类型错误

#include <iostream>
using namespace std;
int main()
{
	// unsigned int x;  // 这里unsigned定义错误
	int x;
	unsigned int y = 100;
	unsigned int z = 50;
	x = y - z;
	cout << "Difference is:" << x;
	x = z - y;
	cout << "\n Now difference is:" << x << endl;

	return 0;
}
