#include<iostream>
using namespace std;
int main(){
    //array有三种定义方式
    int arr[3];
    arr[0]=0;
    arr[1]=1;
    arr[2]=2;
    cout<<arr[0]<<arr[1]<<arr[2]<<endl;

    int arr2[3]={1,2,3};
    for(int i=0;i<3;i++){
        cout<<arr2[i];
    }
    cout<<endl;
    int arr3[]={1,2,3,4,5,6,7,8,9};
    for(int j=0;j<9;j++){
         cout<<arr3[j]<<endl;
    }

}