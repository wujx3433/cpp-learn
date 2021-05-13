#include<iostream>
using namespace std;
//数组名是常量。

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    cout<<"数组长度为: "<<sizeof(arr)<<" Byte."<<endl;
    cout<<"每个元素大小: "<<sizeof(arr[0])<<" Byte."<<endl;
    cout<<"数组元素个数: "<<sizeof(arr)/sizeof(arr[0])<<endl;
    cout<<"首地址位于内存的: "<<arr<<endl;
    cout<<"改成十进制: "<<(long long)arr<<endl; //用int有可能报错。
    cout<<"数组第一个元素的地址在: "<<&arr[0]<<endl;
    cout<<"改成十进制: "<<(long long)&arr[0]<<endl;
    cout<<"数组第二个元素的地址在: "<<&arr[1]<<endl;
    cout<<"改成十进制: "<<(long long)&arr[1]<<endl;
    return 0;
}