#include<iostream>
using namespace std;
#include<cstdio>

int main(){
    long long n;
    cin>>n;
    long long FC[n],score[n];
    for(long long i=0;i<n;i++) cin>>FC[i];
    for(long long i=0;i<n;i++) cin>>score[i];
    long long a=0,b=0,c=0; //每一科的满分之和*3-每一科的实际得分之和*2)÷每科所扣除分数的和
    for(long long i=0;i<n;i++) {
        a+=FC[i];
        b+=score[i];
        c+=FC[i]-score[i];
    }
    double ans=(3.*a-2*b)/c;
    printf("%.6f",ans);
    return 0;
}