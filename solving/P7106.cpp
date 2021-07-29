#include<iostream>
using namespace std;
#include<string>

int main(){
    int sharp;
    string hex;
    string T="0123456789ABCDEF";
    cin>>hex;
    for(int i=1;i<=6;i++){
        hex[i]=T[hex[i]>='0'&&hex[i]<='9'?15-(hex[i]-'0'):5-(hex[i]-'A')]; //'0'为了把hex[i]转换成数组的下标
    }
    cout<<hex<<endl;
}