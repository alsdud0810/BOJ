#include <stdio.h>

int main(){
    int k,n,m;
    scanf("%d %d %d", &k,&n,&m);
    if (m-k*n<0) printf("%d",k*n-m);
    else printf("0");
}