//sizeof可以统计数据类型占用的大小。
//用法：sizeof(数据类型 or 变量)。

#include<iostream>
using namespace std;

int main(){
    short num0=1;
    int num1=2;
    long num2=3;
    long long num3=4;

    cout<<"short占用的内存空间有"<<sizeof(short)<<"Byte."<<endl;
    cout<<"int占用的内存空间有"<<sizeof(int)<<"Byte."<<endl;
    cout<<"long占用的内存空间有"<<sizeof(long)<<"Byte."<<endl;
    cout<<"long long占用的内存空间有"<<sizeof(long long)<<"Byte."<<endl;
    cout<<"变量num0占用的内存空间有"<<sizeof(num0)<<"Byte."<<endl;
    cout<<"变量num1占用的内存空间有"<<sizeof(num1)<<"Byte."<<endl;
    cout<<"变量num2占用的内存空间有"<<sizeof(num2)<<"Byte."<<endl;
    cout<<"变量num3占用的内存空间有"<<sizeof(num3)<<"Byte."<<endl;
    return 0;
}