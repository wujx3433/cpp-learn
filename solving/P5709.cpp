#include<iostream>
using namespace std;

int main(){
    int m,s,t;
    cin>>m>>t>>s;
    if(t==0){
        cout<<"0"<<endl;
    }
    else{
        int re=(m*t-s)/t;
        if(re<=0){
            cout<<"0"<<endl;
        }
        else{
            cout<<re<<endl;
        }
    }
    return 0;
}