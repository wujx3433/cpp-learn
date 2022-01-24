#include<iostream>
using namespace std;

int main() {
	int arr[101] = { 0 };
	int i = 0;
	while (true) {
		cin >> arr[i];
		if (arr[i] == 0) break;
		i++;
	}
	for (i; i > 0; i--) cout << arr[i - 1] << " ";

	return 0;
}