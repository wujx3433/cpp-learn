#include<iostream>
using namespace std;
#include<iomanip> //用于输出0102这种形式

int main(){
    int n,ans=0;
    cin>>n;
    int a=n*n;
    int arr[a];
    for(int i=0;i<a;i++) arr[i]=i+1;
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<setfill('0')<<setw(2)<<arr[ans];
            ans++;
        }
        cout<<endl;
    }
    return 0;
}