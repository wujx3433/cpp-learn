#include<iostream>
using namespace std;

int main(){
    float f1=3.14f; //后面要加一个f，不然编译器会认为这是一个double.(老版本问题？？？)
    double d1=3.14;
    float f2=3e-2;
    double d2=3e-2;
    cout<<"float f1 = "<<f1<<endl;
    cout<<"double d1 = "<<d1<<endl;
    cout<<"float运算3e-2 = "<<f2<<endl;
    cout<<"double运算3e-2 = "<<d2<<endl;
    cout<<"float占用内存有"<<sizeof(float)<<"Byte."<<endl;
    cout<<"double占用内存有"<<sizeof(double)<<"Byte."<<endl;
    return 0;
}