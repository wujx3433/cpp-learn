#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> a;

int main() {
	int n, t;
	scanf("%d", &n);
	while (n--) scanf("%d", &t), a.push_back(t);
	bool sorted = false;
	while (!sorted) {
		random_shuffle(a.begin(), a.end());
		sorted = true;
		for (auto i = a.begin(); i != a.end(); ++i) {
			if (i == a.begin()) continue;
			if(*i < *(i-1)) {
				sorted = false;
				break;
			}
		}
	}
	for (auto i : a) printf("%d ", i);
	return 0;
}