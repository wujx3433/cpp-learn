#include<iostream>
using namespace std;

int main(){
    int arr[]={5,6,8,1,4,5,8,6,4};
    int start=0;
    int end=sizeof(arr)/sizeof(arr[0])-1;
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
        cout<<arr[i]<<endl;
    }
    return 0;   
}