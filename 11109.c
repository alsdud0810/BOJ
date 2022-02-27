#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    long long d, n, s, p;
    long long q;
    for (int i=0; i<t;i++){
        scanf("%lld %lld %lld %lld",&d,&n,&s,&p);
        q=s*n-(d+p*n);
        if (q>0) printf("parallelize\n");
        else if (q<0) printf("do not parallelize\n");
        else printf("does not matter\n");
    }
}