// 例4-7结构体.cpp : 结构体的创建和使用
//

#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

struct Student{   // 学生信息结构体
	int num;     // 学号
	string name;  //姓名
	char sex;     //性别
	int age;     //年龄
};

int main(){
	Student stu = { 961122, "York Zhang", 'F', 19 };
	cout << "Num:  " << stu.num << endl;
	cout << "Nmae:  " << stu.name << endl;
	cout << "Sex:  " << stu.sex << endl;
	cout << "Age:  " << stu.age << endl;
	return 0;
}

