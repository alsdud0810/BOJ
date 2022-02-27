#include <stdio.h>

int main(){
    int n, d;
    scanf("%d %d",&n,&d);
    int result=0;
    for (int i=1; i<=n; i++){
        int a=i;
        while(a!=0){
            if (a%10==d) result++;
            a/=10;
        }
    }printf("%d", result);
}