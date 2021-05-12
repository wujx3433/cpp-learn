#include<iostream>
using namespace std;

int main(){
    short num0=1;
    int num1=2;
    long num2=3;
    long long num3=4;
    //四种不同的整型，代表的是，不同的内存占用。同时，不同的整型的取值范围也不一样。
    /*
    short:[-2^15,2^15 -1]
    int:[-2^31,2^31 -1]
    long:[-2^31,2^31 -1]
    long long:[-2^63,2^63 -1]
    */
    cout<<"我们来输出短整形num0：num="<<num0<<endl;
    cout<<"我们来输出整形num1：num="<<num1<<endl;
    cout<<"我们来输出长整形num0：num="<<num2<<endl;
    cout<<"我们来输出长长整形num0：num="<<num3<<endl;
    return 0;
}