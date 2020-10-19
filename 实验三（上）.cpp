// 实验三（上）.cpp : 
//
#include <iostream>
using namespace std;

/*-------------------温度单位转换函数的使用-----------------
float Convert(float F) {
    float C;
    C = (F - 32) * 5 / 9;
    return C;
}
int main()
{
    float F;
    cout << "Please enter a tempF:\n";
    cin >> F;
    cout << "The tempC is:\n";
    cout << Convert(F);
    return 0;
}
----------------------------------------------------------*/

/*---------------斐波那契数列------------------------------
int fib(int n);

int main() {
    int m, answer;
    cout << "Please enter an integer:";
    cin >> m;
    cout << "\n\n";
    answer = fib(m);
    cout << answer << " is the " << m << "th" << " Fibonacci number.";
    return 0;
}

int fib(int n) {
    cout << "Processing fib(" << n << ")......";
    if (n < 3) {
        cout << "Return 1 !\n";
        return (1);
    }
    else {
        cout << "Call fib(" << n - 2 << ") and fib(" << n - 1 << ").\n";
        return(fib(n - 2) + fib(n - 1));
    }
}
----------------------------------------------------------------------*/