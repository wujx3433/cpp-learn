#include<iostream>
using namespace std;

int main(){
    int N,ans;
    cin>>N;
    int train[N];
    for(int k=0;k<N;k++) cin>>train[k];
    for(int i=0;i<N-1;i++){
        for(int j=0;j<N-i-1;j++){
            if(train[j]>train[j+1]){
                int tmp=train[j];
                train[j]=train[j+1];
                train[j+1]=tmp;
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}