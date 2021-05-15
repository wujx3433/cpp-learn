#include<iostream>
using namespace std;

int main(){
    int a=1;
    int b=1;

    //1.const修饰指针 常量指针
    const int *p=&a; //可以改指向，不可以解引用
    p=&b; //WRONG: *p=2
    
    //2.const修饰常量 指针常量
    int * const p2=&a; //可以解引用，不可以改指向
    *p2=2; //WRONG: p2=&b

    //3.全都要
    const int *const p3=&a;
    //不可以解引用，不可以改指向

    return 0;
}