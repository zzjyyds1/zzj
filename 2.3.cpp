#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	cout << "�������һ���ߵĳ���";
	cin >> a;
	cout << "������ڶ����ߵĳ���";
	cin >> b;
	cout << "������������ߵĳ���";
	cin >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		if (a == b || a == c || b == c)
		{
			cout << "�ǵ���������";
			cout << "�ܳ�Ϊ��" << a + b + c;
		}
		else {
			cout << "���ǵ���������";
			cout << "�ܳ�Ϊ��" << a + b + c;
		}
	}
	else
		cout << "�޷�����������";
}