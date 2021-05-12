#include<iostream>
using namespace std;

int main(){
    char ch='a'; //char只可以将一个字母以ASCII的形式存入内存中，不可以存储字符串。
    cout<<"我们写入了一个char字符型变量ch = "<<ch<<endl;
    cout<<"char字符型变量占用的内存空间有"<<sizeof(char)<<"Byte."<<endl;
    cout<<"这个字符串的10进制ASCII码为"<<int(ch)<<endl;
    //可以直接使用ch=ASCII来直接赋值。
    ch=64;
    cout<<endl<<ch<<endl;
    return 0;
}