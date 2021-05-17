#include<iostream>
using namespace std;

int main(){
    int n,k,tmp,ans;
    cin>>n>>k;
    ans=n;
    tmp=n;
    while(tmp>=k){
        tmp-=k;
        ans++;
        tmp++;
    }
    cout<<ans<<endl;
    return 0;
}