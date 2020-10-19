// experiment2_7.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// 用do-while和for语句求自然数1-10之和

#include <iostream>
using namespace std;
const float PI = 3.1416;

struct MyTimeStruct
{
	unsigned int year;
	unsigned int month;
	unsigned int day;

	unsigned int hour;
	unsigned int min;
	unsigned int sec;
};

int main()
{
	/*int sum = 0;
	int i = 1;
	do {
		sum += i;
		i++;
	} while (i <= 10);
	cout << "sum = " << sum << endl;*/

/*---------------------------------------------------------*/

	/*int sum = 0;
	int i;
	for (i = 0; i <= 10; i++)
		sum += i;
	cout << "sum= " << sum << endl;
	return 0;*/
/*---------------------------------------------------------*/
	// 求长形，正方形，圆形的面积
	// switch-case的使用
	/*int iType;
	float radius, a, b, area;
	cout << "图形的类型为？（1-圆形 2-长方形 3-正方形）";
	cin >> iType;
	switch (iType)
	{
	case 1:
		cout << "圆的半径为？";
		cin >> radius;
		area = PI * radius * radius;
		cout << "圆的面积为：" << area << endl;
		break;
	case 2:
		cout << "矩形的长为：";
		cin >> a;
		cout << "矩形的宽为：";
		cin >> b;
		area = a * b;
		cout << "矩形的面积为：" << area << endl;
		break;
	case 3:
		cout << "正方形的边长为：";
		cin >> a;
		area = a * a;
		cout << "正方形的面积为：" << area << endl;
		break;
	default:
		cout << "请输入正确的类型！" << endl;
		break;*/
/*---------------------------------------------------------*/
	// 声明一个表示时间的结构体
	// 可以精确表示年月日小时分秒
	// 提示用户输入年月日小时分秒的值
	// 然后完整的显示出来
	// Struct结构：作用是把一组相互关联的数据整合在一起
	MyTimeStruct myTime;
	cout << "请输入年：" << endl;
	cin >> myTime.year;

	cout << "请输入月：" << endl;
	cin >> myTime.month;

	cout << "请输入日：" << endl;
	cin >> myTime.day;

	cout << "请输入小时：" << endl;
	cin >> myTime.hour;

	cout << "请输入分：" << endl;
	cin >> myTime.min;

	cout << "请输入秒：" << endl;
	cin >> myTime.sec;

	cout << "时间设置为：" << myTime.year << "/"
		<< myTime.month << "/"
		<< myTime.day << "/"
		<< myTime.hour << ":"
		<< myTime.min << ":"
		<< myTime.sec << endl;
	 



}



 