#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int a = 2;
	int sum = 0;
	int i = 0;
	while (a <= 100)
	{
		sum += a;
		a *= 2;
		i++;
	}
	cout << "ƽ��ÿ�컨��";
	cout << sum * 0.8 / i;
	cout << "Ԫ";
}
