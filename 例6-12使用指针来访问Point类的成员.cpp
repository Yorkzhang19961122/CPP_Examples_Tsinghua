// 例6-12使用指针来访问Point类的成员.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

class Point {
private:
    int x, y;
public:
    Point(int x = 0, int y = 0):x(x), y(y) {}
    int getX() const { return x; }
    int getY() const { return y; }
};
int main(){
    Point a(4, 5);
    Point* p1 = &a;  //定义对象指针,用对象a的地址去初始化p1
    cout << p1->getX() << endl;  //用指针访问对象成员，等同于  (*p1).getX()
    cout << (*p1).getX() << endl;
    cout << a.getX() << endl;  //用对象名访问对象成员
    return 0;
}


