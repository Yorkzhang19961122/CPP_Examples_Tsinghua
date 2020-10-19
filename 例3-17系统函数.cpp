// 例3-17系统函数.cpp : 
//

#include <iostream>
#include<cmath>
using namespace std;
const double PI = 3.1415926;

int main(){
	double angle;
	cout << "Please input an angle:";
	cin >> angle; // 输入角度值
	double radian = angle * PI / 180; //转为弧度值
	cout << "sin(" << angle << ")=" << sin(radian) << endl;
	cout << "cos(" << angle << ")=" << cos(radian) << endl;
	cout << "tan(" << angle << ")=" << tan(radian) << endl;
	return 0;
}


