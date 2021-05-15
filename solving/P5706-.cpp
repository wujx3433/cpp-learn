#include<iostream>
using namespace std;
#include<cstdio>

int main(){
    double t,n,ml,cup;
    cin>>t>>n;
    cup=2*n;
    ml=2*(t/(2*n));
    printf("%.3lf",ml);
    cout<<endl;
    cout<<cup<<endl;
}