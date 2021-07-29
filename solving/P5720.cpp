#include<iostream>
using namespace std;

int main(){
    int a,ans=1;
    cin>>a;
    while(a!=1){
        a/=2;
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}