#include <iostream>
using namespace std;

int main(){
    int n;
    unsigned long long re=0;
    unsigned long long tmp=1;
    cin>>n;
    for(int i=n;i>0;i--){
        for(int j=i;j>0;j--){
            tmp*=j;
        }
        re+=tmp;
        tmp=1;
    }
    cout<<re<<endl;
    return 0;
}