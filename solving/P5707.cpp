#include<cstdio>
#include<cmath>
using namespace std;

int main() {
	int s, v;
	scanf("%d%d", &s, &v);
	int t = ceil(1.0 * s / v) + 10; //ceil��������ȡ��
	int delta = 60 * (24 + 8) - t; //�������ܿ�ʼ�ߵ�ʱ�俪ʼ�㣬ֱ���ٵ�
	int hh = (delta / 60) % 24;
	int mm = delta % 60;
	printf("%02d:%02d\n", hh, mm);

	return 0;
}