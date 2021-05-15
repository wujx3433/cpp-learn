using namespace std;
#include<cstdio>

bool PrimeNum(int num){
    if(num<=1) return bool(false);
    for(int i=2;i<num-1;i++) if(num%i==0) return bool(false);
    return bool(true);
}

int main(){
    int a, t;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d", &t);
        if(PrimeNum(t)) printf("%d ", t);
    }
    return 0;
}

//1.这是用C写的，不是C++风格，不要学歪了-_-||
//2.这个题本来应该用array做，这可倒好，循环输入解决了。这是做题的思路，不是写程序的思路，也别学-_-||