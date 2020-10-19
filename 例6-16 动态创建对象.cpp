// 例6-16 动态创建对象.cpp 

#include <iostream>
using namespace std;

class Point {
public:
    Point() :x(0), y(0) {
        cout << "Default Constructor called." << endl;
    }
    Point(int x, int y) :x(x), y(y) {
        cout << "Constructor called." << endl;
    }
    ~Point() {
        cout << "Destructor called." << endl;
    }
    int getX() const { return x; }
    int getY() const { return y; }
    void move(int newX, int newY) {
        x = newX;
        y = newY;
        cout << "( " << x << ", " << y << " )" << endl;
    }
private:
    int x, y;
};
int main()
{
    cout << "Step one: " << endl;
    Point* ptr1 = new Point;  //定义指向点（Point）类的指针ptr1，在运行时用new运算动态申请内存用于构造点对象，调用默认构造函数，并将它的地址赋给指针ptr1
    delete ptr1;  //删除指针指向的对象，自动调用析构函数，而不是删除指针自己

    cout << "Step two: " << endl;
    ptr1 = new Point(1, 2);
    delete ptr1;

    return 0;
}


