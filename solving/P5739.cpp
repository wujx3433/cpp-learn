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

//�������Զ�Ŵ��룬��ĿҪ��������ѭ��������ô���ǿ����õݹ���

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