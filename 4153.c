#include <stdio.h>

int main(){
    long n1, n2, n3;
    while(1){
        scanf("%ld %ld %ld", &n1,&n2,&n3);
        if (n1==0&&n2==0&&n3==0) break;

        long a, b, c;
        a=n1*n1;
        b=n2*n2;
        c=n3*n3;

        if (c==a+b||a==b+c||b==a+c) printf("right\n");
        else printf("wrong\n");
    }
}