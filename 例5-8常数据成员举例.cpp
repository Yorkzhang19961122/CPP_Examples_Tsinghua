// 例5-8常数据成员举例.cpp : 
//

#include <iostream>
using namespace std;

class A {
private:
    const int a;  //对象的成员，可以定义为常成员，a在构造每一个对象的时候初始化
    static const int b;   //（static）类的成员，可以定义为常成员，一旦一个成员定义为常成员了，则只能在初始化的时候给它们初始值，在类体中声明，在类体外初始化
public:
    A(int i);
    void print();
};
const int A::b = 10; //类的成员在类外初始化
A::A(int i) :a(i) {} //构造函数，此时通过成员初始化列表对a进行初始化

void A::print() {
    cout << a << ": " << b << endl;
}

int main(){
    A a1(100), a2(0);
    a1.print();
    a2.print();
    return 0;
}


