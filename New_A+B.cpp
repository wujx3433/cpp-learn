#include<iostream>
#include<string>
using namespace std;

int sizea, sizeb, m, x[1000] = { 0 };
string a, b;
int main()
{
	cin >> a >> b;
	sizea = a.size();
	sizeb = b.size();
	m = max(sizea, sizeb);
	//倒序相加，按大小确定谁加谁
	if (sizea > sizeb) {
		for (int i = 0; i < sizea; i++) x[i] = a[sizea - i - 1] - '0';
		for (int j = 0; j < sizeb; j++) x[j] += b[sizeb - j - 1] - '0';
	}
	else{
		for (int i = 0; i < sizeb; i++) x[i] = b[sizeb - i - 1] - '0';
		for (int j = 0; j < sizea; j++) x[j] += a[sizea - j - 1] - '0';
	}
	//处理进位
	for (int i = 0; i < m; i++) {
		if (x[i] > 9) {
			x[i] -= 10;
			x[i + 1]++;
		}
	}
	//溢出位
	if (x[m] > 0) m++;
	//倒序输出
	for (int i = m-1; i >= 0; i--) cout << x[i];

	return 0;
}
