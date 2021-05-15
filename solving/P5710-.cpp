#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    bool a,b;
    //Even
    if(x%2==0){
        bool a=true;
    }
    else{
        bool a=false;
    }
    //Range
    if(x>4&&x<=12){
        bool b=true;
    }
    else{
        bool b=false;
    }
    cout<<a<<b<<endl;
    bool xiaoA,Uim,hachi,zheng;
    xiaoA=a&b;
    Uim=a|b;
    hachi=a^b;
    zheng=(~a)&(~b);
    cout<<xiaoA<<" "<<Uim<<" "<<hachi<<" "<<zheng<<endl;
    return 0;
}