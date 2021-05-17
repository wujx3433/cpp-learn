#include<iostream>
using namespace std;
#include<cstring>

int main(){
    string num;
    cin>>num;
    int len=num.size();
    for(int i=len-1;i>=0;i--){
        cout<<num[i];
    }
    return 0;
}