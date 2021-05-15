#include<iostream>
using namespace std;

//1.无参无返
void func1(){
    cout<<"func1"<<endl;
}
//2.有参无返
void func2 (int a){
    cout<<"func2 a="<<a<<endl;
}
//3.无参有返
int func3 (){
    cout<<"func3 return 1"<<endl;
    return 1;
}

//4.有参有返
int func4(int a){
    cout<<"func4 return a a="<<a<<endl;
    return a;
}

int main(){
    int a2,a4;
    cin>>a2>>a4;
    func1();
    func2(a2);
    func3();
    cout<<func3()<<endl;
    func4(a4);
    cout<<func4(a4)<<endl;
    return 0;
}