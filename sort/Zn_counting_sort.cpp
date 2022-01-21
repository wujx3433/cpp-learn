#include<iostream>
using namespace std;

int main() {
	int a, count, out[10000] = { 0 };
	cin >> count;
	for (int i = 0; i < count; i++) {
		cin >> a;
		out[a]++;
	}
	for (int i = 0; i < 10000; i++) {
		if (out[i] != 0) {
			for (int j = 0; j < out[i]; j++) cout << i << " ";
		}
	}

	return 0;
}