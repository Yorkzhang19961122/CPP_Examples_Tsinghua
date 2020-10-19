// 汉诺塔问题-递归问题
#include <iostream>
using namespace std;

// 将src（源）上的第一个盘子移动到dest（目标）针上
void move(char src, char dest) {
	cout << src << "-->" << dest << endl;
}
void hanoi(int n, char src, char medium, char dest){
	// 递归终止条件
	if (n == 1){
		move(src, dest);
	} 
	else {
		hanoi(n - 1, src, dest, medium); // 第1个递归深入点: 3-->2-->1
		move(src, dest);
		hanoi(n - 1, medium, src, dest); // 第2个递归深入点
	}
}
int main(){
	int m;
	cout << "Enter the number of diskes:";
	cin >> m;
	cout << "the steps to move" << m << "diskes:" << endl;
	hanoi(m, 'A', 'B', 'C');
	return 0;
}


