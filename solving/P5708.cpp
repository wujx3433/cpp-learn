#include<iostream>
using namespace std;
#include<cmath>
#include<cstdio>

int main(){
    double p,a,b,c,solve;
    cin>>a>>b>>c;
    p=(a+b+c)/2;
    solve=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%.1lf",solve);
    return 0;
}