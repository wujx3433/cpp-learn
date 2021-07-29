#include<iostream>
using namespace std;
#include<cmath>

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int e,f;
    if(d>b){
        e=c-a;
        f=(d-b);
    }
    else{
        e=c-a-1;
        f=60-abs((d-b)%60);
    }
    cout<<e<<" "<<f<<endl;
    return 0;
}