#include<iostream>
#include<string>
using namespace std;

int main()
{
	int sizea, sizeb, sizeans, a[1000] = { 0 }, b[1000] = { 0 }, c[2000] = { 0 };
	string a1, b1;
	cin >> a1 >> b1;
	sizea = a1.size();
	sizeb = b1.size();
	sizeans = sizea + sizeb;
	for (int i = 0; i < sizea; i++) a[i] = a1[sizea - i - 1] - '0';
	for (int j = 0; j < sizeb; j++) b[j] = b1[sizeb - j - 1] - '0';
	for (int i = 0; i < sizea; i++) {
		for (int j = 0; j < sizeb; j++) {
			c[i + j] += a[i] * b[j]; //�������ֳ���������ĳһλ
			c[i + j + 1] += c[i + j] / 10; //��λ
			c[i + j] = c[i + j] % 10; //��λ��ʣ�¶���
		}
	}
	if (c[sizeans - 1] == 0) sizeans--;
	for (int i = sizeans - 1; i >= 0; i--) cout << c[i];

	return 0;
}
