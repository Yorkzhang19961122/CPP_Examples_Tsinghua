// experiment_3_1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// 输入输出和三目运算

#include <iostream>
using namespace std;
int main()
{
	int a, b, x;
	cout << "input value of a:\n";
	cin >> a;
	cout << "input value of b:\n";
	cin >> b;
	x = (a - b) > 0 ? (a - b) : (b - a);  // 三目运算符
	cout << "The difference of a and b is:\t\t" << x;

	return 0;
}

