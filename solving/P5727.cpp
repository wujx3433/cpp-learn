#include<iostream>
using namespace std;

bool Odd(int a) {
	if (a % 2 == 0) return 0;
	else return 1;
}

int main() {
	int n, arr[1000] = { 0 }, i = 0;
	cin >> n;
	arr[0] = n;
	while (true) {
		if (n == 1) break;
		if (Odd(n)) n = 3 * n + 1;
		else n = n / 2;
		arr[i + 1] = n;
		i++;
	}
	for (i; i >= 0; i--) cout << arr[i] << " ";
	return 0;
}