#include <stdio.h>

int main(){
    int a, b, n;
    scanf("%d %d %d", &n, &a, &b);
    int cnt=0;
    while(1){
        a=(a+1)/2;
        b=(b+1)/2;
        cnt++;
        if (a==b) break;
    }printf("%d", cnt);
}