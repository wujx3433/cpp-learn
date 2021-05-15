#include<iostream>
using namespace std;

int main(){
    int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int yr,m;
    cin>>yr>>m;
    if(((yr%100!=0)&(yr%4==0))|((yr%100==0)&(yr%400==0))) month[1]++;
        cout<<month[m-1]<<endl;
        return 0;
}