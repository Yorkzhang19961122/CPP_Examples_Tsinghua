// 实验四（下）.cpp : 类的组合

#include <iostream>
using namespace std;

//声明CPU类
enum CPU_Rank { P1 = 1, P2, P3, P4, P5, P6, P7 }; //自定义枚举类CPU_Rank
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
    CPU(CPU& c) {    //CPU 的拷贝构造函数
        rank = c.rank;
        frequency = c.frequency;
        voltage = c.voltage;
        cout << "拷贝构造了一个CPU！" << endl;
    }

    ~CPU() { cout << "析构了一个CPU!" << endl; }  //析构函数

    CPU_Rank GetRank() const { return rank; }    //外部接口函数 const的函数不能对其数据成员进行修改操作
    int GetFrequency() const { return frequency; }
    float GetVoltage() const { return voltage; }

    void SetRank(CPU_Rank r) { rank = r; }       //用于设置三个私有数据成员的接口
    void SetFrequency(int f) { frequency = f; }
    void SetVoltage(float v) { voltage = v; }

    void Run() { cout << "CPU开始运行！" << endl; }
    void Stop() { cout << "CPU停止运行！" << endl; }
};

//声明RAM类
enum RAM_Type {DDR2 = 2, DDR3, DDR4};
class RAM {
private:
	RAM_Type type;
	int frequency; //MHz
	int size;  //GB
public:
	RAM(RAM_Type t, int f, int s) {
        type = t;
		frequency = f;
		size = s;
		cout << "构造了一个RAM！" << endl;
	}
	~RAM() { cout << "析构了一个RAM！" << endl; }

    RAM_Type GetType() const { return type; }
    int GetFrequency() const { return frequency; }
    int GetSize() const { return size; }

    void SetType(RAM_Type t) { type = t; }
    void SetFrequency(int f) { frequency = f; }
    void SetSize(int v) { size = v; }

    void Run() { cout << "RAM开始运行！" << endl; }
    void Stop() { cout << "RAM停止运行！" << endl; }
};

//声明CDROM类
enum CDROM_Interface {SATA, USB};
enum CDROM_Install_type {external, built_in};
class CD_ROM {
private:
    CDROM_Interface interface_type;
    int cache_size; //MB
    CDROM_Install_type install_type;
public:
    CD_ROM(CDROM_Interface i, int s, CDROM_Install_type it) {
        install_type = it;
        cache_size = s;
        interface_type = i;
        cout << "构造了一个CDROM!" << endl;
    }
    ~CD_ROM() { cout << "析构了一个CDROM!" << endl; }

    CDROM_Install_type GetInstallType() const { return install_type; }
    CDROM_Interface GetInterfaceType() const { return interface_type; }
    int GetCacheSize() const { return cache_size; }

    void SetInstallType(CDROM_Install_type it) { install_type = it; }
    void SetInterfaceType(CDROM_Interface i) { interface_type = i; }
    void SetCacheSize(int s) { cache_size = s; }

    void Run() { cout << "CDROM开始运行！" << endl; }
    void Stop() { cout << "CDROM停止运行！" << endl; }
};

//在以上三个类的基础上定义COMPUTER类
class COMPUTER {
private:
    CPU my_cpu;
    RAM my_ram;
    CD_ROM my_cdrom;
    int storage_size; //GB
    int bandwidth; //MB
public:
    COMPUTER(CPU c, RAM r, CD_ROM cd, int s, int b);  //COMPUTER的构造函数(此处仅声明，具体写在下面)
    ~COMPUTER() { cout << "析构了一个COMPUTER!" << endl; }

    void Run() {
        my_cpu.Run();
        my_ram.Run();
        my_cdrom.Run();
        cout << "COMPUTER开始运行！" << endl;
    }
    void Stop() {
        my_cpu.Stop();
        my_ram.Stop();
        my_cdrom.Stop();
        cout << "COMPUTER停止运行！" << endl;
    }
};
//COMPUTER类中带有五个参数的构造函数，构造函数写在类的外部，需要加上作用域的限定符
COMPUTER::COMPUTER(CPU c, RAM r, CD_ROM cd, int s, int b) :my_cpu(c), my_ram(r), my_cdrom(cd)  //五个参数分别对应五个私有数据成员，其中前三个是内嵌对象，
{                                                                                              //所以需要在冒号后面给出初始化列表，让这三个内嵌对象分别调用它们各自类的拷贝构造函数来完成三个内嵌对象的初始化
    storage_size = s;   //而简单数据类型的成员则通过赋值语句完成初始化
    bandwidth = b;
    cout << "构造了一个COMPUTER!" << endl;
}

int main()
{
    CPU a(P6, 300, 2.8);
    a.Run();
    a.Stop();
    cout << "*******************************\n";

    RAM b(DDR3, 1600, 8);
    b.Run();
    b.Stop();
    cout << "*******************************\n";

    CD_ROM c(SATA, 2, built_in);
    c.Run();
    c.Stop();
    cout << "*******************************\n";

    COMPUTER my_computer(a, b, c, 128, 10);
    cout << "*******************************\n";

    my_computer.Run();
    my_computer.Stop();
    cout << "*******************************\n";

    return 0;
}


