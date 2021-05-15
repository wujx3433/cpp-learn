#include<iostream>
using namespace std;

void swap(int num1,int num2){
    int temp=num1;
    num1=num2;
    num2=temp;
    cout<<num1<<" "<<num2<<endl;
}

int main(){
    int a,b;
    cin>>a>>b;
    swap(a,b);
    return 0;
}