// 例6-8利用指针数组存放矩阵.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。


#include <iostream>
using namespace std;

int main() {
    int line1[] = { 1, 0, 0 };  //矩阵的第一行
    int line2[] = { 0, 1, 0 };  //矩阵的第二行
    int line3[] = { 0, 0 ,1 };  //矩阵的第三行

    //定义整型指针数组并初始化，用一维数组数组名（指针）去初始化指针数组
    int* pLine[3] = { line1,line2,line3 };
    cout << "Matrix test: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << pLine[i][j] << " ";
        cout << endl;
    }
    return 0;
}


