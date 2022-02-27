#include <stdio.h>

int main(){
    int a, b, c, d;
    int max, min;
    while(1){
        scanf("%d %d %d %d", &a,&b,&c,&d);
        if (a==0&&b==0&&c==0&&d==0) break;
        max=d-a;
        min=c-b;
        printf("%d %d\n",min,max);
    }
    
}