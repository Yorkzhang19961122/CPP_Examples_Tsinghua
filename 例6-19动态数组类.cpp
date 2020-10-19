// 例6-19动态数组类.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cassert>
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

class ArrayOfPoints {   //动态数组类
public:
    ArrayOfPoints(int size) :size(size) {
        points = new Point[size];
    }
    ~ArrayOfPoints() {
        cout << "Deleting..." << endl;
        delete[] points;
    }
    Point& element(int index) {  //返回的是引用类型
        assert(index >= 0 && index < size);
        return points[index];
    }
private:
    Point* points;  //指向动态数组首地址
    int size;    //数组大小
};

int main()
{
    int count;
    cout << "Please enter the count of points: ";
    cin >> count;
    ArrayOfPoints points(count);  //创建数组对象
    points.element(0).move(5, 0);
    points.element(1).move(15, 20);
    return 0;
}
