// P39_函数的递归调用.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// 实现求n！的递归公式

#include <iostream>
using namespace std;

// 计算n的阶乘
unsigned fac(unsigned n)
{
	unsigned f;
	if (n == 0)
		f = 1;
	else
		f = fac(n - 1) * n;
	return f;
}
int main()
{
	unsigned n;
	cout << "Enter a positive integer:";
	cin >> n;
	unsigned y = fac(n);
	cout << n << "! =" << y << endl;
	return 0;
}

// f=fac(2)*3=fac(1)*2*3=fac(0)*1*2*3=1*1*2*3