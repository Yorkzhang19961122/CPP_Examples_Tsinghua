// 例3-16重载函数.cpp : 编写两个名为SsumofSquare的重载函数，分别求两整数的平方和及两实数的平方和
//

#include <iostream>
using namespace std;

int sumofSquare(int a, int b) {
	return a * a + b * b;
}

double sumofSquare(double a, double b) {
	return a * a + b * b;
}
int main(){
	int m, n;
	cout << "Enter two integer: ";
	cin >> m >> n;
	cout << "The sum of square: " << sumofSquare(m, n) << endl;
	double x, y;
	cout << "Enter two real number:";
	cin >> x >> y;
	cout << "The sum of square: " << sumofSquare(x, y) << endl;
	return 0;
}

