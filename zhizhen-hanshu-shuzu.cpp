//冒泡排序的综合应用
#include<iostream>
using namespace std;

//冒泡排序
void BubbleSort(int *arr,int lenth){ //数组首地址，数组长度
    for(int i=0;i<lenth-1;i++){
        for(int j=0;j<lenth-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<lenth;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[]={4,3,6,9,1,2,10,8,7,5};
    int lenth=sizeof(arr)/sizeof(arr[0]);
    BubbleSort(arr,lenth);
    return 0;
}