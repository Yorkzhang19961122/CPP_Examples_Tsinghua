// P38_函数的嵌套调用.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// 函数的嵌套调用-输入两个整数，求平方和

#include <iostream>
using namespace std;

int fun1(int x, int y)
{
    int fun2(int m);
    return fun2(x) + fun2(y);
}

int fun2(int m)
{
    return m * m;
}

int main()
{
    int a, b;
    int sum;
    cout << "Please enter two intergers(a and b):";
    cin >> a >> b;
    sum = fun1(a, b); 
    cout << "The sum of square of a and b:" << sum << endl;
    return 0;
}


