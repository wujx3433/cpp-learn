#include<iostream>
using namespace std;

int main(){
    double score;
    cout<<"Input Score: "<<endl;
    cin>>score;
    cout<<"Your Score Is: "<<score<<endl;
    if(score>=750){
        cout<<"你喝多了吧？你家高考能考七百五往上啊？？？"<<endl;
    }
    else if(score>=600){
        cout<<"Congratulations! Your Score Is Above 600."<<endl;
    }
    else{
        cout<<"六百分都拿不到，你学你妈呢"<<endl;
    }


}