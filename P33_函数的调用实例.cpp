// P33_函数的调用实例.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// 二进制与十进制的转换

#include <iostream>
using namespace std;

// 函数调用前的原型声明
double power(double x, int n);
int main()
{
	int value = 0;
	cout << "Enter an 8 bit binary number ";
	for (int i = 7; i >= 0; i--)
	{
		char ch;
		cin >> ch;
		if (ch == '1')
			value += static_cast<int>(power(2, i));
	}
	cout << "Decimal calue is " << value << endl;
	return 0;
}

double power(double x, int n) //函数名power，形参x, n 
{
	double val = 1.0;
	while (n--)
		val *= x;
	return val;
}

