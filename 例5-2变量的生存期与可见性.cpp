// 例5-2变量的生存期与可见性.cpp : 


#include <iostream>
using namespace std;
int i = 1;  //i为全局变量，具有静态生存期

void other() {
    static int a = 2;
    static int b;
    // a,b为静态局部变量，具有全局寿命，局部可见(局部作用域)，只在第一次进入other函数时被初始化
    int c = 10; //c为局部变量，具有动态生存期，每次进入函数时都被初始化
    a += 2; i += 32; c += 5;
    cout << "---OTHER---\n";
    cout << "i: " << i << "a: " << a << "b: " << b << "c: " << c << endl;
    b = a;
}
int main(){
    static int a;  //静态局部变量，有全局寿命，局部可见
    int b = -10;  //b,c为局部变量，具有动态生存周期
    int c = 0;
    cout << "---MAIN---\n";
    cout << "i: " << i << "a: " << a << "b: " << b << "c: " << c << endl;
    c += 8;
    other();
    cout << "---MAIN---\n";
    cout << "i: " << i << "a: " << a << "b: " << b << "c: " << c << endl;
    i += 10;
    other();
    return 0;
}
