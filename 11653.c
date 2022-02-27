#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int d=2;
    while(n>1){
        if (n%d==0){
            printf("%d\n",d);
            n/=d;
        }
        else{
            d++;
        }
    }
}