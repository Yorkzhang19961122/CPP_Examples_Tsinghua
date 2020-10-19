// 第六章-综合实例.cpp : 设计一个货期储蓄帐号类SavingsAccount
//包括信息：账号(id)，余额(balance)，年利率(rate)
//包括操作：显示账户信息(show)，存款(deposit),取款(withdraw),结算利息(settle)

#include <iostream>
#include <cmath>
using namespace std;

class SavingsAccount {  //储蓄账户类
private:
	int id;		//账号
	double balance;   //余额
	double rate;    //存款的年利率
	int lastDate;   //上次变更余额的时期
	double accumulation;  //余额按日累加之和

	//记录一笔账，date为日期，amount为金额，desc为说明
	void record(int date, double amount);
	//获得到指定日期为止的存款金额按日累积值
	double accumulate(int date)const {   //函数比较简单所以在类中直接定义
		return accumulation + balance * (date - lastDate);
	}
public:
	//构造函数的声明
	SavingsAccount(int date, int id, double rate);
	//获取私有数据成员的对外接口
	int getId() { return id; }
	double getBalance() { return balance; }
	double getRate() { return rate; }

	//存入现金的声明
	void deposit(int date, double amount);
	//取出现金的声明
	void withdraw(int date, double amount);
	//结算利息的声明，每年1月1日调用一次该函数
	void settle(int date);
	//显示账户信息的声明
	void show();
};
//SavingsAccount类相关成员函数的实现
//构造函数
SavingsAccount::SavingsAccount(int date, int id, double rate) :id(id), balance(0), rate(rate), lastDate(date), accumulation(0) {
	cout << date << "\t#" << id << " is created" << endl;
}
//记录一笔账
void SavingsAccount::record(int date, double amount) {
	accumulation = accumulate(date);
	lastDate = date;
	amount = floor(amount * 100 + 0.5) / 100;
	balance += amount;
	cout << date << "\t#" << id << " " << amount << "\t" << balance << "\t" << endl;
}
//存钱
void SavingsAccount::deposit(int date, double amount) {
	record(date, amount);
}
//取钱
void SavingsAccount::withdraw(int date, double amount) {
	if (amount > getBalance()) {
		cout << "Not enough money!";
	}
	else
		record(date, -amount);
}
//结息
void SavingsAccount::settle(int date) {
	double interest = accumulate(date) * rate / 365;
	if (interest != 0)
		record(date, interest);
	accumulation = 0;
}
//显示账户信息
void SavingsAccount::show() {
	cout << "\t#" << id << "\tBalance: " << balance;
}

int main() {
	//建立几个账户
	SavingsAccount sa0(1, 21325302, 0.015);
	SavingsAccount sa1(1, 58320212, 0.015);

	//几笔账目
	sa0.deposit(5, 5000);
	sa1.deposit(25, 10000);
	sa0.deposit(45, 5500);
	sa1.withdraw(60, 14000);

	//开户第90天到了银行的计息日，结算所有账户的年息
	sa0.settle(90);
	sa1.settle(90);

	//输出各账户信息
	sa0.show();
	cout << endl;
	sa1.show();
	cout << endl;

	return 0;
}