#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if((n%100!=0&n%4==0)|(n%100==0&n%400==0)){
        cout<<"1"<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
}