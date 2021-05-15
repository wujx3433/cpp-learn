#include<iostream>
using namespace std;
#include<cmath>

int main() {
    int T;
    cin >> T;
    if (T == 1) {
        cout << "I love Luogu!"<<endl;
    } else if (T == 2) {
        cout <<"6 "<<10 - 2 - 4<<endl;
    } else if (T == 3) {
        cout<<14/4<<endl;
        cout<<14-14%4<<endl;
        cout<<14%4<<endl;
        // 请自行完成问题 3 的代码
    } else if (T == 4) {
        float ml=500.000f;
        cout<<ml/3<<endl;
        // 请自行完成问题 4 的代码
    } else if (T == 5) {
        int l=260+220;
        int v=12+20;
        cout<<l/v<<endl;
        // 请自行完成问题 5 的代码
    } else if (T == 6) {
        cout<<sqrt(6*6+9*9)<<endl;
        // 请自行完成问题 6 的代码
    } else if (T == 7) {
        int balance=100;
        balance+=10;
        cout<<balance<<endl;
        balance-=20;
        cout<<balance<<endl;
        balance=0;
        cout<<balance<<endl;
        // 请自行完成问题 7 的代码
    } else if (T == 8) {
        int r=5;
        double pi=3.141593;
        double c,s,v;
        c=pi*r*2;
        s=pi*r*r;
        v=(pi*r*r*r)*(4/3);
        cout<<c<<endl;
        cout<<s<<endl;
        cout<<v<<endl;
        // 请自行完成问题 8 的代码
    } else if (T == 9) {
        int count=1;
        int day=3;
        for(int i=1;i<=day;i++){
            count=(count+1)*2;
        }
        cout<<count<<endl;
        // 请自行完成问题 9 的代码
    } else if (T == 10) {
        double y=10;
        double x;
        cout<<(126-y)/12<<endl;
        // 请自行完成问题 10 的代码
    } else if (T == 11) {
        double res=100/3;
        cout<<res<<endl;
        // 请自行完成问题 11 的代码
    } else if (T == 12) {
        char chr='A';
        char chr2='M';
        char chr3=int(chr)+18-1;
        cout<<int(chr2)-int(chr)+1<<endl;
        cout<<chr3<<endl;
        // 请自行完成问题 12 的代码
    } else if (T == 13) {
        int r1=4;
        int r2=10;
        double v1,v2,v3;
        int l;
        double pi=3.141593;
        v1=(4*pi*r1*r1*r1)/3;
        v2=(4*pi*r2*r2*r2)/3;
        v3=v1+v2;
        l=pow(v3,(double)1/3);
        cout<<l<<endl;
        // 请自行完成问题 13 的代码
    } else if (T == 14) {
        int price=110;
        int x=10;
        int sum=price*x;
        int re1,re2;
        for(int i=0;i<110;i++){
            while(sum==3500){
                re1=price;
            }
            while(sum==3500&&sum!=re1){
                re2=price;
            }
            price--;
            x++;
        }
        cout<<re1<<endl<<re2<<endl;
        // 请自行完成问题 14 的代码
    }
    return 0;
}