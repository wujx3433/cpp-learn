#include<iostream>
using namespace std;

int main(){
	int n;

	while(1){
	cout << "Input a natural number:";
	cin >> n;

	if (n%2 == 0)
		cout << "Even" << endl;
	else
		cout << "Odd" << endl;
	}

	return 0;
}
