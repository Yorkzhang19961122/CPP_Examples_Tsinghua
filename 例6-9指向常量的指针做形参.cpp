// 例6-9指向常量的指针做形参.cpp 
//

#include <iostream>
using namespace std;

const int N = 6;
void print(const int* p, int n);   //const常指针：指针指向的对象是常量，只能通过指针读取而不能修改

int main() {
	int array[N];
	for (int i = 0; i < N; i++)
		cin >> array[i];
	print(array, N);
	return 0;
}
void print(const int* p, int n) {
	cout << "{ " << *p;
	for (int i = 1; i < n; i++)
		cout << ", " << *(p + i);
	cout << " }" << endl;
}


