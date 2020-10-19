// 例6-24用getline输入字符串.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    for (int i = 0; i < 2; i++) {
        string city, state;
        getline(cin, city, ','); //以逗号为分隔符
        getline(cin, state);  //未指定分隔符，默认以行结束为分隔符
        cout << "City: " << city << "State: " << state << endl;
    }
    return 0;
}


