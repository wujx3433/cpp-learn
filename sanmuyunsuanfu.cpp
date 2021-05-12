#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"分别输入a和b，我们会比较a和b，并且输出其中的大数字。我们没有使用max函数。"<<endl;
    cin>>a>>b;
    c=(a>b?a:b);
    cout<<c<<endl;
    return 0;
}