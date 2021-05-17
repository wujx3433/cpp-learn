#include<iostream>
using namespace std;

int main(){
    bool a,b,c,d;
    int x;
    cin>>x;
    a=(x%2==0)&(x>4&&x<=12);
    b=(x%2==0)|(x>4&&x<=12);
    c=(x%2==0)^(x>4&&x<=12);
    d=(x%2!=0)&(x<=4&&x>12);
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    return 0;
}



// int main(){
//     int x;
//     cin>>x;
//     bool a,b;
//     //Even
//     if(x%2==0){
//         bool a=true;
//     }
//     else{
//         bool a=false;
//     }
//     //Range
//     if(x>4&&x<=12){
//         bool b=true;
//     }
//     else{
//         bool b=false;
//     }
//     cout<<a<<b<<endl;
//     bool xiaoA,Uim,hachi,zheng;
//     xiaoA=a&b;
//     Uim=a|b;
//     hachi=a^b;
//     zheng=(~a)&(~b);
//     cout<<xiaoA<<" "<<Uim<<" "<<hachi<<" "<<zheng<<endl;
//     return 0;
// }