// 例6-18动态创建多维数组.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

int main(){
	int(*cp)[9][8] = new int[7][9][8]; //cp是指向9行8列的二维数组的指针，用于接收动态分配三维数组得到的首地址
	for (int i = 0; i < 7; i++)
		for (int j = 0; j < 9; j++)
			for (int k = 0; k < 8; k++)
				*(*(*(cp + i) + j) + k) = (i * 100 + j * 10 + k);  //给数组的每个元素赋值
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 9; j++) {
			for(int k =0;k<8;k++)
				cout << cp[i][j][k] << " ";  //输出数组的每个元素
			cout << endl;
		}
		cout << endl;
	}
	delete[] cp;  //释放数组所占用的空间
	return 0;
}


