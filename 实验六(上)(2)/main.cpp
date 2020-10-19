// 实验六（上）(2).cpp : 
//声明一个Employee类，其中包括姓名，街道地址，城市和邮编等属性，以及change_name()和display()等函数
//display()显示姓名，街道地址，城市和邮编等属性
//change_name()改变对象的姓名属性，实现并测试这个类
#include <iostream>
#include "employee.h"
using namespace std;


int main(){
	Employee e('WangEr', 'Haidian', 'Beijing', '100084');
	e.display();
	e.change_name('Li San');
	e.display();
	return 0;
}


