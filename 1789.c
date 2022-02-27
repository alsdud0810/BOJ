#include <stdio.h>

int main(){
    long long S;
    scanf("%lld", &S);
    long long temp=S;
    int cnt=0;
    while (temp>0){
        cnt++;
        temp-=cnt;
    }
    if (temp==0) printf("%d", cnt);
    else printf("%d", cnt-1);
}