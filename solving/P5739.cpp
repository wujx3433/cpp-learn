#include<iostream>
using namespace std;

int main(){
    int n;
    long long re=1;
    cin>>n;
    for(int i=n;i>0;i--) re*=i;
    cout<<re<<endl;
    return 0;
}