#include<iostream>
using namespace std;

int main(){
    char var;
    while(1){
    cout<<"输入一个字母以查询相应的ASCII值（10进制）：";
    cin>>var;
    cout<<int(var)<<endl;
    }
    return 0;
}