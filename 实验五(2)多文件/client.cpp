// 实验五-例题二-多文件.cpp :实现客户机类(CLIENT)
/*
声明字符型静态数据成员ServerName，保存其服务器名称
整型静态数据成员ClientNum，记录已定义的客户数量
定义静态函数ChangeServerName()，改变服务器名称
*/
//client.cpp用于类的实现
#include "client.h"
#include <iostream>
//实现两个成员函数
void Client::ChangeServerName(char name) {  //静态数据成员的引用，注意加上“类名::”来修饰
    Client::ServerName = name;
    Client::ClientNum++;
}
int Client::getClientNum() {
    return Client::ClientNum;
}


