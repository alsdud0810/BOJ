#include <stdio.h>

int main(){
    int n;
    int i=1;
    int temp;
    scanf("%d", &n);
    temp=n-1;
    if (n==1) {
        printf("1");
        return 0;
    }
    while(1){
        temp-=6*i;
        if (temp<=0) break;
        i++;
    }printf("%d", i+1);
}