// 例5-7常成员函数.cpp : 
//

#include <iostream>
using namespace std;

class R {
private:
    int r1, r2;
public:
    R(int r1, int r2) : r1(r1), r2(r2) {}
    void print();
    void print() const;
};
void R::print() {
    cout << r1 << ": " << r2 << endl;
}
void R::print() const {  //常函数，保证print不改变对象的状态，用来处理常对象
    cout << r1 << ": " << r2 << endl;
}

int main(){
    R a(5, 4);  //定义一个非常对象，可以调用常成员函数
    a.print();  //调用void print()
    const R b(20, 52);  //定义一个常对象，只能用常函数去处理它
    b.print();   //调用void print() const
    return 0;
}


