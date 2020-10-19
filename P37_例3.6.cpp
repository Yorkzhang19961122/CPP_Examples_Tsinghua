// P37_例3.6.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// 投骰子的随机问题
// 由rolldice函数负责模拟投骰子，计算和数并输出和数

#include <iostream>
#include <cstdlib> // 随机数rand的头文件
using namespace std;

enum GameStatus {WIN,LOSE,PLAYING}; //定义枚举类型-比赛状态
int main()
{
    int sum, myPoint;
    GameStatus status;
    unsigned seed; //随机数种子seed
    int rollDice();
    cout << "Please enter an unsigned integer:";
    cin >> seed; // 输入随机数的种子
    srand(seed); //将种子传递给rand()
    sum = rollDice(); //第一轮投骰子，计算和数
    switch (sum)
    {
    case 7:  //如果和数为7或11则为胜，状态为WIN
    case 11:
        status = WIN;
        break;
    case 2:  // 和数为2、3或12则为负，状态为LOSE
    case 3:
    case 12:
        status = LOSE;
        break;
    default:  // 其他情况，尚无结果，状态为PLAYING，记下点数
        status = PLAYING;
        myPoint = sum;
        cout << "point is" << myPoint << endl;
        break;
    }
    while (status == PLAYING)  // 只要状态为PLAYING，继续
    {
        sum = rollDice();
        if (sum == myPoint) // 某轮的和数等于点数则取胜
            status = WIN;
        else if (sum == 7) // 出现和数为7则为负
            status = LOSE;
    }
    if (status == WIN)  // 退出游戏后的输出
        cout << "player wins" << endl;
    else
        cout << "player losses" << endl;
    return 0;
}

// rollDice函数-投骰子、计算和数、输出和数
int rollDice()
{
    int die1 = 1 + rand() % 6;  // 让整个整数范围内的数处于1-6之间(除以6取余数会在0-5)
    int die2 = 1 + rand() % 6;
    int sum = die1 + die2;
    cout << "player rolled" << die1 << "+" << die2 << "=" << sum << endl;
    return sum;
}
