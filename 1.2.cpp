#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double r;
	double h;
	cout << "ÇëÊäÈë°ë¾¶:";
	cin>>r;
	cout << "ÇëÊäÈë×¶¸ß:";
	cin >> h;
	const double pi = 3.14;
	cout << pi * r * r * h / 3.00;
}