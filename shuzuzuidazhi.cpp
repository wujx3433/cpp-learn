#include<iostream>
using namespace std;

int main(){
    int arr[]={300,540,856,530,752};
    int max=0;
    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"The Biggest One Is: "<<max<<endl;
    return 0;
}