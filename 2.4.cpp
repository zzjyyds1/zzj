#include<iostream>
using namespace std;
int main() {
	double a, b;
	char c;
	cout << "�������һ�����֣�";
	cin >> a;
	cout << "�������������";
	cin >> c;
	cout << "������ڶ������֣�";
	cin >> b;
	switch (c)
	{
	case '-': cout << "�����";   cout << a - b; break;
	case '+': cout << "��ӵ�";   cout << a + b; break;
	case '*': cout << "��ӵ�";   cout << a * b; break;
	case '/': if (b == 0) { cout << "��������Ϊ��"; break; }
			else { cout << "�����";   cout << a / b; break; }
	case '%': cout << "ȡ���";   cout << (int)a % (int)b; break;
	defult : cout << "����������"; break;
	}
}