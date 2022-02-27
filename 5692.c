#include <stdio.h>

int fact(int n){
    if (n==0) return 1;
    return n*fact(n-1);
}

int main(){
    int n,i,j;
    
    while(1){
        scanf("%d", &n);
        if (n==0) break;
        j=1;
        int result=0;
        while(1){
            i=n%10;
            n/=10;
            result+=i*fact(j);
            j++;
            if (n==0) break;
        }printf("%d\n", result);
    }
}