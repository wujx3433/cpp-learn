#include<iostream>
using namespace std;

int main(){
    int n,ta,tb; //ta=Local;tb=Luogu;
    cin>>n;
    ta=5*n;
    tb=11+3*n;
    if(ta<tb){
        cout<<"Local"<<endl;
    }
    else{
        cout<<"Luogu"<<endl;
    }
    return 0;
}