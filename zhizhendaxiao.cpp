#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    int *p=&a;
    cout<<"指针内存空间："<<sizeof(*p)<<endl; //sizeof(int *)也可以。
}