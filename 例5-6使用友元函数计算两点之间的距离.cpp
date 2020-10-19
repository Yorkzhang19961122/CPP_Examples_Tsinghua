// 例5-6使用友元函数计算两点之间的距离.cpp : 

#include <iostream>
#include<cmath>
using namespace std;

class Point {   //Point类声明
private:    //私有数据成员
    int x, y;
public:    //外部接口
    Point(int x = 0, int y = 0) :x(x), y(y) {}
    int getX() { return x; }
    int getY() { return y; }
    friend float dist(Point& a, Point& b);  //将dist函数授权设为友元，允许访问Point类中的私有数据成员。
                                            //用对象做参数时，通常传对象的引用
};

float dist(Point& a, Point& b) {
    double x = a.x - b.x;
    double y = a.y - b.y;
    return static_cast<float>(sqrt(x * x + y * y));
}

int main()
{
    Point p1(1, 1), p2(4, 5);   //定义两个点p1 p2
    cout << "The distance is: ";
    cout << dist(p1, p2) << endl;   //将p1 p2作为实参去初始化两个引用形参
    return 0;
}

