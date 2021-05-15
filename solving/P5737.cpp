#include<iostream>
using namespace std;

int LeapYr(int Yr){
    return ((Yr%400==0)&(Yr%100==0)|(Yr%4==0)&(Yr%100!=0));
}
int main(){
    int x,y;
    int a=0;
    cin>>x>>y;
    for(int i=x;i<=y;i++) a+=LeapYr(i);
    cout<<a<<endl;
    for(int i=x;i<=y;i++){
        a+=LeapYr(i);
        if(LeapYr(i)==1) cout<<i<<" ";
    }
}