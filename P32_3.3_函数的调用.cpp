// P32_3.3_函数的调用.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

// 计算x的n次方
double power(double x, int n) //函数名power，形参x, n 
{
    double val = 1.0;
    while (n--)
        val *= x;
    return val;
} 
// 在主函数中调用power函数
int main() 
{
    double pow;
    pow = power(5, 2);
    cout << "5 to the power 2 is:" << pow << endl;
    return 0;
}

