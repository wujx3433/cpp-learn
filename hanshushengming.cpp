#include<iostream>
using namespace std;
int max(int num1,int num2);

int main(){
    int a,b;
    cin>>a>>b;
    cout<<max(a,b)<<endl;
}

int max(int num1,int num2){
    return (num1>num2?num1:num2);
}