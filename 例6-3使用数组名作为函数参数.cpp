// 例6-3使用数组名作为函数参数.cpp :
//主函数中初始化一个二维数组，表示一个矩阵，并将每个元素都输出，然后调用子函数，分别计算每一行的元素之和，
//将和直接存放在每行的第一个元素中，返回主函数之后输出各行元素的和

#include <iostream>
using namespace std;

void rowSum(int a[][4], int nRow) {  //计算二维数组每行元素的和
    for (int i = 0; i < nRow; i++) {
        for (int j = 1; j < 4; j++)
            a[i][0] += a[i][j];
    }
}
int main(){
    int table[3][4] = { {1,2,3,4},{2,3,4,5},{3,4,5,6} };
    for (int i = 0; i < 3; i++) { //外层行循环
        for (int j = 0; j < 4; j++)    //内层列循环
            cout << table[i][j] << "   ";
        cout << endl;
    }
    rowSum(table, 3);   //调用子函数，计算各行和，用数组名做实参其实就是将数组的首地址传给了函数rowSum
    for (int i = 0; i < 3; i++)   //输出计算结果
        cout << "Sum of row " << i << " is " << table[i][0] << endl;
    
    return 0;    
}


