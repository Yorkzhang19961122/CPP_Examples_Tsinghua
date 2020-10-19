// 例4-8联合体.cpp : 使用联合体保存成绩信息，并输出

#include <iostream>
#include <string>
using namespace std;

class Examinfo {
private:
	string name;   //课程名称
	enum { GRADE, PASS, PERCENTAGE } mode;  //计分方式
	union {
		char grade;    //等级制的成绩
		bool pass;    //是否通过的成绩
		int percent;  //百分制的成绩
	};
public:
	//三种构造函数，分别用等级，是否通过和百分初始化
	Examinfo(string name, char grade)
		: name(name), mode(GRADE), grade(grade) {}
	Examinfo(string name, bool pass)
		: name(name), mode(PASS), pass(pass) {}
	Examinfo(string name, int percent)
		: name(name), mode(PERCENTAGE), percent(percent) {}
	void show(){
		cout << name << ": ";
		switch (mode){
		case Examinfo::GRADE: cout << grade;
			break;
		case Examinfo::PASS: cout << (pass ? "PASS" : "FAIL");
			break;
		case Examinfo::PERCENTAGE: cout << percent;
			break;
		}
		cout << endl;
	}
};
int main(){
	Examinfo course1("English", 'B');
	Examinfo course2("Calculus", true);
	Examinfo course3("C++ programming", 85);
	course1.show();
	course2.show();
	course3.show();
	return 0;
}

