#include<iostream>
using namespace std;

int Max(int a, int b, int c) {
	if (a > b && a > c) return a;
	if (b > c && b > a) return b;
	if (c > a && c > b) return c;
}

int Min(int a, int b, int c) {
	if (a < b && a < c) return a;
	if (b < c && b < a) return b;
	if (c < a && c < b) return c;
}

int main() {
	int a = 0, b = 0, c = 0;
	cin >> a >> b >> c;
	int _max = Max(a, b, c);
	int _min = Min(a, b, c);
	int _mid;
	if ((a == _max && b == _min) || (a == _min && b == _max)) _mid = c;
	else if ((b == _max && c == _min) || (b == _min && c == _max)) _mid = a;
	else if ((c == _max && a == _min) || (c == _min && a == _max)) _mid = b;
	if (a + b <= c || b + c <= a || a + c <= b) {
		cout << "Not triangle" << endl;
		return 0;
	}
	if (_max * _max == _mid * _mid + _min * _min) cout << "Right triangle" << endl;
	if (_max * _max < _mid * _mid + _min * _min) cout << "Acute triangle" << endl;
	if (_max * _max > _mid * _mid + _min * _min) cout << "Obtuse triangle" << endl;
	if (a == b || b == c || a == c) cout << "Isosceles triangle" << endl;
	if (a == b && b == c && a == c) cout << "Equilateral triangle" << endl;

	return 0;
}