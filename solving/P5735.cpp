#include<iostream>
using namespace std;
#include<cmath>
#include<cstdio>

int main(){
    double x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    double dis1=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    double dis2=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
    double dis3=sqrt(pow(x2-x3,2)+pow(y2-y3,2));
    printf("%.2f",dis1+dis2+dis3);
    cout<<endl;
    return 0;
}