#include<cstdio>
#include<cmath>
using namespace std;

int main() {
	int s, v;
	scanf("%d%d", &s, &v);
	int t = ceil(1.0 * s / v) + 10; //ceil函数向上取整
	int delta = 60 * (24 + 8) - t; //从最早能开始走的时间开始算，直到迟到
	int hh = (delta / 60) % 24;
	int mm = delta % 60;
	printf("%02d:%02d\n", hh, mm);

	return 0;
}