#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double a;
	double b = 0;
	double c = 1;
	cout << "������a��";
	cin >> a;
	if(a<0)
	{
		cout << "�������ܿ�ƽ��";
	}
	else
	{
		while (c - b >= 1.0 / 10000000000 || c - b <= -1.0 / 10000000000)
		{
			if (b == 0)
			{
				b = a;
			}
			else { b = c; }
			c = 0.5 * (b + a / b);
			cout << "a��ƽ����Ϊ��" << setprecision(11) << c;
		}
		cout << "a��ƽ����Ϊ��" <<setprecision(11)<< c;
	}
}