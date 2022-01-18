#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int size, size2 = 0, temp;
	cin >> size;
	int arr[1000] = { 0 };
	bool judge[1000] = { 0 };
	for (int i = 0; i < size; i++) {
		cin >> temp;
		if (judge[temp] == 0) {
			judge[temp] = 1;
			arr[size2++] = temp;
		}
	}
	cout << size2 << endl;
	sort(arr, arr + size2);
	for (int i = 0; i < size2; i++) if (arr[i] != 0) cout << arr[i] << " ";

	return 0;
}