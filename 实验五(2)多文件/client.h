//.h头文件用于声明类
#ifndef CLIENT_H_   //为了避免重复包含头文件，通常使用编译预处理指令
#define CLIENT_H_

class Client {
	static char ServerName;
	static int ClientNum;
public:
	static void ChangeServerName(char name);
	static int getClientNum();
};

#endif  //CLIENT_H_