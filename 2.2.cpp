#include<iostream>
using namespace std;
int main() {

double x;
	cout << "ÇëÊäÈëx£º";
	cin >> x;
	if (5.0 <= x && x< 10.0) {
		cout << "y=" << x * x;
	}
	else {
		if (1.0 <= x &&x< 5.0) {
			cout << "y=" << 2 / (4 * x) + 1;
		}
		else {
			if (0.0 < x&&x < 1.0) {
				cout << "y=" << 3 - 2 * x;
			}
			else { cout << "³¬³ö·¶Î§";
			}
		}
	}
}