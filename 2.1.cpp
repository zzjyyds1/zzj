#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	char a;
	cout << "�������ַ���";
	cin >> a;
	if ((int)a > 91) {
		cout <<"�ַ�ΪСд,תΪ��д��"<< (char)(a - 32);
	}
	else {
		cout << "�ַ�Ϊ��д,���ASCII�룺" << (int)a;
	}
}