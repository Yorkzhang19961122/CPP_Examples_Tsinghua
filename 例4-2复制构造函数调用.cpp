// 例4-2复制构造函数调用.cpp : 

#include <iostream>
using namespace std;

class Point{  //Point类的定义
public:     //外部接口
	Point(int xx = 0, int yy = 0) {  //构造函数
		x = xx; 
		y = yy; 
	}
	Point(const Point& p);  //拷贝构造函数的声明
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
private:
	int x, y; //私有数据
};

//成员函数的实现
Point::Point(const Point& p) { //复制构造函数
	x = p.x;
	y = p.y;
	cout << "Calling the copy constructor" << endl;
}
// 形参为point类对象的函数
void fun1(Point p) {
	cout << p.getX() << endl;
}

// 返回值为Point类对象的函数
Point fun2() {
	Point a;
	return a;
}

int main(){
	Point a;    // 第一个对象A
	Point b(a);  //情况一，用A初始化B，第一次调用复制构造函数，构造对象b
	cout << b.getX() << endl;  
	fun1(b);    //情况二，对象B作为fun1的实参，第二次调用复制构造函数
	b = fun2();  //情况三，函数的返回值是类对象，函数返回时，调用复制构造函数
	cout << b.getX() << endl;
	return 0;
}


