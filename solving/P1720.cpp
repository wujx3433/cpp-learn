#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main(){
    double n;
    cin>>n;
    double F;
    F=(pow((1+sqrt(5))/2,n)-pow((1-sqrt(5))/2,n))/sqrt(5);
    printf("%.2f\n",F);
    return 0;
}
