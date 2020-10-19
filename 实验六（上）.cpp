// 实验六（上）.cpp : 
//

#include <iostream>
using namespace std;

void swap(int& a, int& b) {   //使用引用作为函数的参数，比使用指针更安全
	int temp = a;
	a = b;
	b = temp;
}
int main(){
	int a[3][3];
	cout << "输入9个整数作为矩阵元素值：" << endl;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			cin >> a[i][j];
	cout << "输入完毕！" << endl;
	cout << "初始矩阵：" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			cout << a[i][j] << " ";
		cout << endl;  //每输出三个元素，换行
	}
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < i; j++) //注意这里的for循环控制语句
			swap(a[i][j], a[j][i]);

	cout << "转置后的矩阵：" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}

	return 0;
}



