// ��������������������ֵ���ݣ�
#include<iostream>
using namespace std;

void swap(int a, int b) { // a, b���Ӻ����ľֲ��������뿪�Ӻ���������
	int t = a;
	a = b;
	b = t;
}

int main() {
	int x = 5, y = 10; //x, y ֻ���������ı��������Ӻ�������뿪��������
	cout << "x = " << x << "y = " << y << endl;
	swap(x, y);
	cout << "x = " << x << "y =" << y << endl;
	return 0;
}