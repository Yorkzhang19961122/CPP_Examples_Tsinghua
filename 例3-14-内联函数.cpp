// 例3-14-内联函数.cpp : inline()的作用
// 使用内联函数计算圆面积
// 既可以定义计算圆面积的函数，也可以不付出转子函数和返回的开销

#include <iostream>
using namespace std;

const double PI = 3.1415926;
inline double calArea(double radius) {   // 建议编译器在调用函数的时候直接拿公式替换
	return PI* radius* radius;
}
int main()
{
	double r = 3.0;
	double area = calArea(r);
	cout << area << endl;
	return 0;
}


