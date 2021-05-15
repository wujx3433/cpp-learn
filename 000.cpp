#include<cstdio>
#include<ctime>
using namespace std;

int main() {
    int year;
    scanf("%d",&year);
    printf("%s\n",  __isleap(year) ? "Yes" : "No");
    return 0;
}