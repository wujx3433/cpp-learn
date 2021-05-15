#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    int *p=&a;
    cout<<"a的地址："<<p<<endl;
    cout<<"*p="<<*p<<endl;
    int b;
    cin>>b;
    *p=b;
    cout<<"解引用，a="<<a<<endl;
    return 0;
}