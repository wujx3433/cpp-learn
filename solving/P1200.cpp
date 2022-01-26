#include<iostream>
#include<string>
using namespace std;

int main() {
	string a, b;
	int _a[6] = { 0 }, _b[6] = { 0 }, suma = 1, sumb = 1;
	cin >> a >> b;
	for (int i = 0; i < a.size(); i++) {
		_a[i] = a[i] - 'A' + 1;
		suma *= _a[i];
	}
	for (int i = 0; i < b.size(); i++) {
		_b[i] = b[i] - 'A' + 1;
		sumb *= _b[i];
	}
	if (suma % 47 == sumb % 47) cout << "GO";
	else cout << "STAY";

	return 0;
}