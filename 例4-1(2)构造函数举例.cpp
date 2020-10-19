// 例4-1(2)构造函数举例.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

class Clock{
public:
	Clock(int newH, int newM, int newS); //带参数的构造函数
	Clock(); //默认构造函数，调用的时候可以不用参数，是构造函数的一种重载形式
	void setTime(int newH=0, int newM=0, int newS=0);
	void showTime();
private:
	int hour, minute, second;
};

Clock::Clock(int newH, int newM, int newS) : hour(newH), minute(newM), second(newS) {}  // 带参数的构造函数
Clock::Clock():hour(0), minute(0), second(0) {}  // 默认构造函数，也是用初始化列表初始化参数，只是需要使用自己约定的值初始化数据成员，因为它不带参数
void Clock::setTime(int newH, int newM, int newS){ // 成员函数
	hour = newH;
	minute = newM;
	second = newS;
}
void Clock::showTime(){     // 成员函数
	cout << hour << ":" << minute << ":" << second << endl;
}

int main(){
	Clock c1(8, 10, 0); //调用有参数的构造函数，编译器根据参数列表匹配构造函数
	Clock c2; //调用无参数的构造函数
	c1.showTime();
	c2.showTime();
	return 0;
}


