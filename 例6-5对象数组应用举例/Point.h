//point.h
#ifndef _POINT_H
#define _POINT_H
class Point {
public:
	Point();   //Ĭ�Ϲ��캯��
	Point(int x, int y);   //���캯��
	~Point();
	void move(int newX, int newY);
	int getX() const { return x; }
	int getY() const { return y; }
	static void showCount();    //��̬������Ա
private:
	int x, y;
};
#endif // !_POINT_H
