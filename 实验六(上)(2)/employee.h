#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include <iostream>
using namespace std;

class Employee {
	char* name;
	char* address;
	char* city;
	char* code;
public:
	//构造函数
	Employee( char* n = "",  char* add = "",  char* ct = "",  char* cd = "") :name(n), address(add), city(ct), code(cd) {}
	//成员函数比较简单的，可以直接声明在类中
	void display() {
		cout << "name: " << name << endl;
		cout << "address: " << address << endl;
		cout << "city: " << city << endl;
		cout << "code: " << code << endl;
	}
	void change_name(char* nm) {
		name = nm;
	}
};
#endif