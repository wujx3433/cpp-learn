#include<iostream>
#include<string>
using namespace std;

int main() {
	int n;
	string pwd;
	cin >> n >> pwd;
	int Size = pwd.size();
	n %= 26;
	for (int i = 0; i < Size; i++) {
		pwd[i] = pwd[i] + n;
		while (pwd[i] - 'a' + 1 > 26) pwd[i] -= 26;
		cout << char(pwd[i]);
	}

	return 0;
}