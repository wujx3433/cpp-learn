#include<iostream>
using namespace std;

int main(){
    int n,m; //n=Number of students
    cin>>n>>m; //m=Number of check
    int student[n],check[m];
    for(int i=0;i<n;i++) cin>>student[i];
    for(int i=0;i<m;i++) cin>>check[i];
    for(int i=0;i<m;i++) cout<<student[check[i]-1]<<endl;
    return 0;
}