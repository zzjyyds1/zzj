#include<iostream>
using namespace std;
int main() {
	unsigned int a, b;
	cout << "�������һ����������";
	cin >> a;
	cout << "������ڶ�����������";
	cin >> b;
	int c = 1;
	int temp = 0;
	while (c<=a&&c<=b) {
		if (a % c == 0 && b % c == 0) {
			temp = c;
		}
		c++;
	}
	cout << "���Լ����" << temp<<endl;
	int d = a*b;
	while (d >=a&&d>=b)
	{
		if (d % a == 0 && d % b == 0) {
			temp = d;
		}
		d--;
	}
	cout << "��С��������" << temp;
}