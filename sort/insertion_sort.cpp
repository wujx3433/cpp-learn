#include<iostream>
using namespace std;

int main() {
	int size, arr[1000] = { 0 };
	cout << "������Ԫ�ظ�����";
	cin >> size;
	cout << "������������Ԫ�أ�";
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
	cout << "����������Ԫ��˳��Ϊ��";
	for (int i = 0; i < size; i++) cout << arr[i] << " ";

	return 0;
}