// 实验四（上）.cpp : 
//

#include <iostream>
using namespace std;

enum CPU_Rank {P1 = 1, P2, P3, P4, P5, P6, P7}; //自定义枚举类CPU_Rank
class CPU {
private:
    CPU_Rank rank;
    int frequency;
    float voltage;

public:
    CPU(CPU_Rank r, int f, float v) {           //构造函数
        rank = r;
        frequency = f;
        voltage = v;
        cout << "构造了一个CPU!" << endl;
    }
    ~CPU() { cout << "析构了一个CPU!" << endl; }  //析构函数

    CPU_Rank GetRank() const { return rank; }    //外部接口函数
    int GetFrequency() const { return frequency; }
    float GetVoltage() const { return voltage; }

    void SetRank(CPU_Rank r) { rank = r; }       //设置三个私有数据成员的接口
    void SetFrequency(int f) { frequency = f; }
    void SetVoltage(float v) { voltage = v; }

    void Run() { cout << "CPU开始运行！" << endl; }
    void Stop() { cout << "CPU停止运行！" << endl; }
};

int main()
{
    CPU a(P6, 300, 2.8);   //声明一个CPU对象并初始化
    a.Run();  //调用其公有成员函数
    a.Stop();
    return 0;
}


