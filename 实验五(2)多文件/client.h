//.hͷ�ļ�����������
#ifndef CLIENT_H_   //Ϊ�˱����ظ�����ͷ�ļ���ͨ��ʹ�ñ���Ԥ����ָ��
#define CLIENT_H_

class Client {
	static char ServerName;
	static int ClientNum;
public:
	static void ChangeServerName(char name);
	static int getClientNum();
};

#endif  //CLIENT_H_