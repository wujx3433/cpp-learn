#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    long long arr[t];
    for(long long k=0;k<t;k++) cin>>arr[k];
    for(long long i=0;i<t;i++){
        arr[i]-=arr[i]/7;
        cout<<arr[i]<<endl;
        }
    return 0;
}