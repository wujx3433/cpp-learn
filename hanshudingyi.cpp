#include<iostream>
using namespace std;

int add(int num1,int num2){
    int sum=num1+num2;
    return sum;
}

int main(){
    int a,b;
    cin>>a>>b;
    int re=add(a,b);
    cout<<re<<endl;
    return 0;
}