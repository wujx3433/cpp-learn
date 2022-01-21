#include<iostream>
#include<string>
using namespace std;

int tmp[13] = { 0 }, _count = 0;
string ISBN;

int main() {
	cin >> ISBN;
	for (int i = 0; i < 13; i++) {
		if (ISBN[i] == '-') continue;
		tmp[_count++] = ISBN[i] - '0';
	}
	bool judge = 0;
	int right = 0;
	for (int i = 0; i < 9; i++) right += (i + 1) * tmp[i];
	right %= 11;
	if (right == 10) right = 'X';
	else right += '0';
	if (ISBN[12] == right) judge = 1;
	else judge = 0;

	if (judge) cout << "Right" << endl;
	else {
		for (int i = 0; i < 12; i++) cout << ISBN[i];
		cout << char(right) << endl;
	}

	return 0;
}