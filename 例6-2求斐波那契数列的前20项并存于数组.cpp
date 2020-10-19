// 例6-2求斐波那契数列的前20项并存于数组.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。


#include <iostream>
using namespace std;

int main(){
    int f[20] = { 1,1 };
    for (int i = 2; i < 20; i++)   //初始化第0、1个数
        f[i] = f[i - 2] + f[i - 1];  //求第2-19个数
    for (int i = 0; i < 20; i++) {
        if (i % 5 == 0) cout << endl;  //输出，每行5个数
        cout.width(12);    //设置输出宽度为12
        cout << f[i];
    }
    return 0;
}

