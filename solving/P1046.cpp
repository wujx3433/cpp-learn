#include<iostream>
using namespace std;

int main() {
	int apple[10] = { 0 }, L, ans=0;
	for (int i = 0; i < 10; i++) cin >> apple[i];
	cin >> L;
	L += 30;
	for (int i = 0; i < 10; i++) {
		if (apple[i] <= L) ans++;
	}
	cout << ans << endl;

	return 0;
}