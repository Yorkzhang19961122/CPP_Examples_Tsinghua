// P35_例3.4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// 找回文数

#include <iostream>
using namespace std;

// 判断n是否为回文数的函数
bool symm(unsigned n)
{
	unsigned i = n;
	unsigned m = 0;
	while (i > 0)
	{
		m = m * 10 + i % 10;
		i /= 10;
	}
	return m == n;
}

int main()
{
	for (unsigned m = 11; m < 1000; m++)
	{
		if (symm(m) && symm(m * m) && symm(m * m * m))
		{
			cout << "m = " << m;
			cout << "m*m = " << m * m;
			cout << "m*m*m=" << m * m * m << endl;
		}
	}
	return 0;
}


