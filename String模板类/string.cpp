#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include"findstr.h"
using namespace std;
int main() {
	cout << "STL������string��ʹ��" << endl;
	string str = "helloworld";
	int length = str.size();
	for (int i = 0; i < length; i++) {
		cout << str.at(i) << endl;
	}
	//�����쳣�Ĳ���
	try {
		str.at(50);
	}
	catch (out_of_range& e) {
		cout << e.what() << endl;
	}
	//�ַ����Ľ�ȡ
	string str1 = "zhudecheng@gmail.com";
	int pos = str1.find("@");
	string substr = str1.substr(0, pos);
	cout << substr << endl;
	//���ð�������
	//����������ѧ��ʽ�ı��
	//findstr();
	return 0;


	string a;
	string b;

	getline(cin, a);
	getline(cin, b);

	int post = b.find(a);

	cout << post << endl;
	return 0;
}