#include<iostream>
using namespace std;
#include<ctime>

int main(){
    srand(time(NULL));
    int num=rand()%100 +1;
    int a=0;
    while(a!=num){
        cout<<"Input Your Number: ";
        cin>>a;
        if(a>num){
            cout<<"Bigger Than That."<<endl;
        }
        else if(a<num){
            cout<<"Smaller Than That"<<endl;
        }
        else{
            cout<<"Bingo!"<<endl;
        }
    }
}