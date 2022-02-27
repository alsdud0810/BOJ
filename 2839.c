#include <stdio.h>

int main(){
    int n,answer=0;
    scanf("%d", &n);

    while(n>=0){
        if(n%5==0){
            answer=answer+n/5;
            printf("%d", answer);
            break;
        }
        else{
            n-=3;
            answer++;
        }
    }
    if(n<0){
        printf("-1");
    }
}