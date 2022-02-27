#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    int sum=0;
    int n;
    for (int i=0; i<t;i++){
        scanf("%d",&n);
        sum+=n;
    }printf("%d",sum-t+1);
}