#include <stdio.h>

int main(){
    int n;
    int a=0, b=0, c=0;
    scanf("%d", &n);
    if (n%10!=0) {
        printf("-1");
        return 0;
    }
    else{
        a=n/300;
        n%=300;
        b=n/60;
        n%=60;
        c=n/10;
    }printf("%d %d %d", a, b, c);
}