#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int h;
	cout << "请输入华氏温度:";
	cin >> h;
	cout <<"对应的摄氏温度是：" << setprecision(4) << (h - 32) * 5 / 9.00<<"℃";
}

