#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	char a;
	cout << "请输入字符：";
	cin >> a;
	if ((int)a > 91) {
		cout <<"字符为小写,转为大写："<< (char)(a - 32);
	}
	else {
		cout << "字符为大写,输出ASCII码：" << (int)a;
	}
}