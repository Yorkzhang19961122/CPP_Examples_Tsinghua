// 例3-12.cpp : 输入两个整数并交换（引用传递）
//

#include <iostream>
using namespace std;

void swap(int& a, int& b) {   // 在子函数中用a, b 两个别名实质上操作x, y
	int t = a;
	a = b;
	b = t;
}
int main()
{
	int x = 5, y = 0;
	cout << "x = " << x << "y = " << y << endl;
	swap(x, y);
	cout << "x = " << x << "y = " << y << endl;
	return 0;
}

