#include<iostream>
using namespace std;

int main(){
    int *p=NULL; //空指针用于初始化指针
    // *p=1;
    //空指针不可以访问
    cout<<p<<endl;
    return 0;
}

int main1(){
    int *p1=(int*)0x19260817; //野指针，未经允许指向了某段内存
    // cout<<*p1<<endl;
    //不可以访问
    return 0;
}