// 实验五-例题一.cpp : 


#include <iostream>
using namespace std;

void fn1();
int x = 1, y = 2;  //全局变量

int main()
{
    cout << "Begin..." << endl;
    cout << "x= " << x << endl;  //x=1
    cout << "y= " << y << endl;  //y=2 全局变量

    cout << "Evaluate x and y in main()..." << endl;
    int x = 10, y = 20;  //局部变量
    cout << "x= " << x << endl;  //x=10
    cout << "y= " << y << endl;  //y=20 main()中的局部变量

    cout << "Step intp fn()..." << endl;
    fn1();

    cout << "Back in main()..." << endl;
    cout << "x= " << x << endl;  //x=10
    cout << "y= " << y << endl;  //y=20

    return 0;
}

void fn1() {
    int y = 200;
    cout << "x= " << x << endl;  //x=1 全局变量x
    cout << "y= " << y << endl;  //y=200 fn1中的局部变量
}