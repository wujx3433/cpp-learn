#include<cstdio>
using namespace std;

int main() {
	int a;
	double bill = 0.;
	scanf("%d", &a);
	if (a <= 150) bill = a * 0.4463;
	if (a > 150 && a <= 400) bill = (a - 150) * 0.4663 + 150 * 0.4463;
	if (a > 400) bill = (a - 400) * 0.5663 + 150 * 0.4463 + 250 * 0.4663;
	printf("%.1f", bill);

	return 0;
}