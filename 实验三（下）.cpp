// 实验三（下）.cpp : 
//

#include <iostream>
#include<cmath>
using namespace std;

/*
  分别编写四个同名函数max1，实现函数的重载
  可分别求取两个整数，三个整数，两个双精度数，三个双精度数的最大值
  在main()函数中测试函数的功能

int max1(int a, int b);
int max1(int a, int b, int c);
double max1(double a, double b);
double max1(double a, double b, double c);



int main()
{
    int a, b, c;
    double x, y, z;
    cout << "Enter int a:\n";
    cin >> a;
    cout << "Enter int b:\n";
    cin >> b;
    cout << "Enter int c:\n";
    cin >> c;
    cout << "the max of " << a << "and " << b << "is " << max1(a, b) << endl;
    cout << "the max of " << a << ", " << b << "and " << c << "is " << max1(a, b, c) << endl;
    cout << "Enter double x:\n";
    cin >> x;
    cout << "Enter double y:\n";
    cin >> y;
    cout << "Enter double z:\n";
    cin >> z;
    cout << "the max of " << x << "and " << y << "is " << max1(x, y) << endl;
    cout << "the max of " << x << ", " << y << "and " << z << "is " << max1(x, y, z) << endl;
    return 0;
}

int max1(int a, int b) {
    if (a == b) return a;
    else if (a >= b)
        return a;
    else
        return b;
}
int max1(int a, int b, int c) {
    return max1(max1(a, b), c);
}
double max1(double a, double b) {
    if (abs(a - b) < 1e-10) return a;
    else if (a >= b)
        return a;
    else
        return b;
}
double max1(double a, double b, double c) {
    return max1(max1(a, b), c);
}
*/

/*
在main()函数中提示输入两个整数x, y
使用cin语句得到x, y的值
调用pow(x, y)函数计算x的y次幂的结果，再显示出来
*/


int main() {
    int x, y;
    cout << "Please enter integer x and y:\n";
    cin >> x >> y;
    // 系统函数计算次幂 pow()
    cout << x << "^" << y << "= " << pow(x, y) << endl;
    return 0;
}
