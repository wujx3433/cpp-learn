#include<iostream>
using namespace std;

int main(){
    double price=1.9;
    int a;
    double b,c;
    cin>>a>>b;
    c=a+b*0.1;
    cout<<int(c/price)<<endl;
    return 0;
}