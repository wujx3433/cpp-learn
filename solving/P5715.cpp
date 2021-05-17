#include<iostream>
using namespace std;

int main(){
    int arr[3];
    for(int k=0;k<3;k++){
        cin>>arr[k];
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3-i-1;j++){
            if(arr[j]>arr[j+1]){
                int tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }
        }
    }
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}