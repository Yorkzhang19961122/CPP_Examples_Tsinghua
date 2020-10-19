// 例4-1(1)构造函数举例.cpp : 

#include <iostream>
using namespace std;

// 类定义
class Clock {
public:
    Clock(int newH, int newM, int newS); //构造函数:(1)名字需和类名一样;(2)无返回值类型，也不能写成void类型;(3)可以有参数表
    void showTime();
private:
    int hour, minute, second;
};
// 构造函数的实现:(1)需要写类名，因为也是类的成员函数；(2)不需要返回；(3)hour(newH),minute(newM),second(newS)是初始化列表
Clock::Clock(int newH, int newM, int newS):hour(newH), minute(newM), second(newS){
}
void Clock::showTime() {     //实现其他两个成员函数
    cout << hour << ":" << minute << ":" << second;
}

int main(){
    Clock c(0, 0, 0); //自动调用构造函数，可以赋初始值
    c.showTime();
    return 0;
}


