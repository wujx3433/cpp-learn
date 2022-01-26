//#include<iostream>
//using namespace std;
//
//int main(){
//    int n;
//    long long re=1;
//    cin>>n;
//    for(int i=n;i>0;i--) re*=i;
//    cout<<re<<endl;
//    return 0;
//}

//上面的是远古代码，题目要求尽量不用循环做，那么我们可以用递归做

#include<iostream>
using namespace std;

long long solve(int a) {
	if (a == 0) return 1;
	else return a * solve(a - 1);
}

int main() {
	int a;
	cin >> a;
	cout << solve(a);

	return 0;
}