// P36_例3.5.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// 求分段函数

#include <iostream>
#include <cmath>
using namespace std;
const double TINY_VALUE = 1e-10; // 定义最小的计算精度10^-10
// 定义计算sinx的函数
double tsin(double x)
{
	double g = 0;
	double t = x;
	int n = 1;
	do
	{
		g += t;
		n++;
		t = -t * x * x / (2 * n - 1) / (2 * n - 2);
	} while (fabs(t) >= TINY_VALUE);
	return g;
}
int main()
{
	double k, r, s;
	cout << "r = ";
	cin >> r;
	cout << "s = ";
	cin >> s;
	if (r * r <= s * s)
		k = sqrt(tsin(r) * tsin(r) + tsin(s) * tsin(s));
	else
		k = tsin(r * s) / 2;
	cout << k << endl;
	return 0;
}

