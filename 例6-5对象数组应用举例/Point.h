//point.h
#ifndef _POINT_H
#define _POINT_H
class Point {
public:
	Point();   //默认构造函数
	Point(int x, int y);   //构造函数
	~Point();
	void move(int newX, int newY);
	int getX() const { return x; }
	int getY() const { return y; }
	static void showCount();    //静态函数成员
private:
	int x, y;
};
#endif // !_POINT_H
