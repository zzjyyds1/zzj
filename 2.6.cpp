#include<iostream>
using namespace std;
int main() {
	unsigned int a, b;
	cout << "请输入第一个正整数：";
	cin >> a;
	cout << "请输入第二个正整数：";
	cin >> b;
	int c = 1;
	int temp = 0;
	while (c<=a&&c<=b) {
		if (a % c == 0 && b % c == 0) {
			temp = c;
		}
		c++;
	}
	cout << "最大公约数：" << temp<<endl;
	int d = a*b;
	while (d >=a&&d>=b)
	{
		if (d % a == 0 && d % b == 0) {
			temp = d;
		}
		d--;
	}
	cout << "最小公倍数：" << temp;
}