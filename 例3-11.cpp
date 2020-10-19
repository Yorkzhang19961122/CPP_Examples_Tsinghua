// 输入两个整数并交换（值传递）
#include<iostream>
using namespace std;

void swap(int a, int b) { // a, b是子函数的局部变量，离开子函数就消亡
	int t = a;
	a = b;
	b = t;
}

int main() {
	int x = 5, y = 10; //x, y 只是主函数的变量，到子函数后就离开了作用域
	cout << "x = " << x << "y = " << y << endl;
	swap(x, y);
	cout << "x = " << x << "y =" << y << endl;
	return 0;
}