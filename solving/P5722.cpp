#include <iostream>
using namespace std;

int main(){
    int n;
    int re=0;
    cin>>n;
    for(int i=n;i>0;i--) re+=i;
    cout<<re<<endl;
    return 0;
}