#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,5,8,4,6,9,7};
    int count=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<count-1;i++){
        for(int j=0;j<count-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<count;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}