#include<iostream>
using namespace std;
#define day 7

int main(){
    cout<<"一个星期有"<<day<<"天"<<endl;//引用#define的常量
    const int month=12;
    cout<<"一年有"<<month<<"个月"<<endl;//引用const修饰的常量
    return 0;
}