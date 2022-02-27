#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    int a, b;
    int sum=0;
    for (int i=0;i<t;i++){
        scanf("%d %d", &a, &b);
        if (b==0) break;
        sum+=a*b;
    }printf("%d", sum);
}