#include<iostream>
using namespace std;

//利用指针访问数组中的元素
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int *p=arr;
    for(int i=0;i<10;i++){
        cout<<*p++<<endl;
    }
    return 0;
}