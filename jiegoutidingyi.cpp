#include<iostream>
using namespace std;
#include<string>

struct Student{
    string name;
    int age;
    int score;
}s3;

int main(){
    //方法1
    struct Student s1; //struct在C++中可以不写
    s1.name="张三";
    s1.age=23;
    s1.score=84;

    //方法2
    struct Student s2={
        "李四",
        19,
        98
    };

    //方法3
    s3.name="王五";
    s3.age=21;
    s3.score=91;
    
    return 0;
}