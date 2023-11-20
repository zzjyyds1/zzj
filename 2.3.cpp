#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	cout << "请输入第一条边的长：";
	cin >> a;
	cout << "请输入第二条边的长：";
	cin >> b;
	cout << "请输入第三条边的长：";
	cin >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		if (a == b || a == c || b == c)
		{
			cout << "是等腰三角形";
			cout << "周长为：" << a + b + c;
		}
		else {
			cout << "不是等腰三角形";
			cout << "周长为：" << a + b + c;
		}
	}
	else
		cout << "无法构成三角形";
}