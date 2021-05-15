#include<iostream>
using namespace std;
#include<string>
#include<ctime>

struct Student{
    string name;
    int score;
};
struct Teacher{
    string name;
    Student sArr[5];
};
void DataIn(Teacher tArr[],int len){
    string NameSeed="ABCDE";
    for(int i=0;i<len;i++){
        tArr[i].name="Teacher_";
        tArr[i].name+=NameSeed[i];
        for(int j=0;j<5;j++){
            int r=rand()%751+60;
            tArr[i].sArr[j].name="Student_";
            tArr[i].sArr[j].name+=NameSeed[i];
            tArr[i].sArr[j].name+=NameSeed[j];
            tArr[i].sArr[j].score=r;
        }
    }
}
void Print(Teacher tArr[],int len){
    for(int i=0;i<len;i++){
        cout<<"Teacher Name: "<<tArr[i].name<<endl;
        for(int j=0;j<5;j++){
            cout<<"\t Student: "<<tArr[i].sArr[j].name<<" "<<
            "\t Student Score: "<<tArr[i].sArr[j].score<<endl;
        }
    }
}

int main(){
    srand(time(NULL));
    Teacher tArr[3];
    int lenTeacher=sizeof(tArr)/sizeof(tArr[0]);
    DataIn(tArr,lenTeacher);
    Print(tArr,lenTeacher);
    return 0;
}
