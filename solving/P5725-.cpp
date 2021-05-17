#include<iostream>
using namespace std;
#include<iomanip> //用于输出0102这种形式

int main(){
    int n,count=0,count2=0;
    cin>>n;
    int arr[81];
    for(int i=0;i<81;i++) arr[i]=i+1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<setfill('0')<<setw(2)<<arr[count];
            count++;
        } 
        cout<<endl;
    }
    cout<<endl;
    //
}