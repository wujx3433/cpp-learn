#include<iostream>
using namespace std;

//Swap value only
void swap1(int num1,int num2){
    int temp=num1;
    num1=num2;
    num2=temp;
    cout<<num1<<" "<<num2<<endl;
}

//Swap memory address
void swap2(int *p1,int *p2){
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
    cout<<*p1<<" "<<*p2<<endl;
}

int main(){
    int a,b;
    cin>>a>>b;
    swap1(a,b);
    swap2(&a,&b);
    return 0;
}