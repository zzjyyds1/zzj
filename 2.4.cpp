#include<iostream>
using namespace std;
int main() {
	double a, b;
	char c;
	cout << "请输入第一个数字：";
	cin >> a;
	cout << "请输入运算符：";
	cin >> c;
	cout << "请输入第二个数字：";
	cin >> b;
	switch (c)
	{
	case '-': cout << "相减得";   cout << a - b; break;
	case '+': cout << "相加得";   cout << a + b; break;
	case '*': cout << "相加得";   cout << a * b; break;
	case '/': if (b == 0) { cout << "除数不能为零"; break; }
			else { cout << "相除得";   cout << a / b; break; }
	case '%': cout << "取余得";   cout << (int)a % (int)b; break;
	defult : cout << "请重新输入"; break;
	}
}