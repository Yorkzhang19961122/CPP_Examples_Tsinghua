// 例5-5类的静态函数成员.cpp : 
//

#include <iostream>
using namespace std;

class Point {
private:
	int x, y;
	static int count;
public:
	Point(int x = 0, int y = 0) :x(x), y(y) {    //构造函数
		count++;
	}
	Point(Point& p) {    //复制构造函数
		x = p.x;
		y = p.y;
		count++;
	}
	~Point() { count--; }
	int getX() { return x; }
	int getY() { return y; }
	static void showCount() {   //静态成员函数
		cout << " Object count= " << count << endl;
	}
};
int Point::count = 0;   //静态数据成员定义和初始化，使用类名限定

int main(){
	Point::showCount();  //在一个点都没有构造前，就可以通过类名去调用，输出对象个数
	Point a(4, 5);    //定义对象a，其构造函数使count增1
	cout << "Point A:" << a.getX() << ", " << a.getY();
	Point::showCount();  //输出对象个数
	a.showCount(); //两种方式调用静态成员函数都可以：（1）使用类名和作用域分辩符来调用（2）使用对象名.函数名的方式调用
	Point b(a);    //定义对象b，其构造函数使count增1
	cout << "Point B: " << b.getX() << ", " << b.getY();
	//Point::showCount();  //输出对象个数
	b.showCount();

	return 0;
}

