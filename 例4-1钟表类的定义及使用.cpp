// 例4-1钟表类的定义及使用.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

class Clock{ //定义一个Clock类
public:
	void setTime(int newH = 0, int newM = 0, int newS = 0);
	void showTime();

private:
	int hour, minute, second;
};
void Clock::setTime(int newH, int newM, int newS) {  //实现两个成员函数
	hour = newH;
	minute = newM;
	second = newS;
}
void Clock::showTime() {     //实现两个成员函数
	cout << hour << ":" << minute << ":" << second;
}

int main() // 在主函数中使用类定义的功能
{
	Clock myClock; // 定义一个Clock类的实例——myClock对象，但没有赋初始值，赋初始值的情况见构造函数
	myClock.setTime(8, 30, 0);
	myClock.showTime();
	return 0;
}


