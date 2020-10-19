// 例6-10以指针作为函数参数.cpp 
// 输入三个浮点数，计算整数和小数部分

#include <iostream>
using namespace std;

//将实数x分成整数部分和小数部分，形参inpart、fracpart是指针
void spiltFloat(float x, int* intPart, float* fracPart) {
    *intPart = static_cast<int>(x);  //取x的整数部分
    *fracPart = x - *intPart;  //取x的小数部分
}

int main(){
    cout << "Enter 3 float point numbers: " << endl;
    for (int i = 0; i < 3; i++) {
        float x, f;
        int n;
        cin >> x;
        spiltFloat(x, &n, &f); //变量地址作为实参【实参传送变量地址给形参指针接受的话，就相当于将主调函数中的变量访问授权送给子函数中了】
        cout << "Integer Part = " << n << "Fraction Part = " << f << endl;
    }
    return 0;
}

