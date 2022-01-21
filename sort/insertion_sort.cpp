#include<iostream>
using namespace std;

int main() {
	int size, arr[1000] = { 0 };
	cout << "请输入元素个数：";
	cin >> size;
	cout << "请输入待排序的元素：";
	for (int i = 0; i < size; i++) cin >> arr[i];
	int pos, temp;
	for (int i = 1; i < size; i++) {
		pos = i;
		temp = arr[i];
		while (pos > 0 && temp < arr[pos - 1]) {
			arr[pos] = arr[pos - 1];
			pos--;
		}
		if (pos != i) arr[pos] = temp;
	}
	cout << "插入排序后的元素顺序为：";
	for (int i = 0; i < size; i++) cout << arr[i] << " ";

	return 0;
}