// P34_例3.3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// 利用arctan求PI的值

#include <iostream>
using namespace std;

// 构造arctan的函数
double arctan(double x)
{
	double sqr = x * x;
	double e = x;
	double r = 0;
	int i = 1;
	while (e / i > 1e-15)
	{
		double f = e / i;
		r = (i % 4 == 1) ? r + f : r - f;
		e = e * sqr;
		i += 2;
	}
	return r;
}
int main()
{
	double a = 16.0 * arctan(1 / 5.0);
	double b = 4.0 * arctan(1 / 239.0);
	// 注意：整数相除结果取整，如果参数写作1/5，1/239，结果就都是0
	cout << "PI = " << a - b << endl;
	return 0;
}

