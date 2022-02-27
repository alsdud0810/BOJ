#include <stdio.h>

int main(){
    int a,b,c,d;
    int p,q,r,s;
    int sum1=0,sum2=0;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    sum1=a+b+c+d;
    scanf("%d %d %d %d",&p,&q,&r,&s);
    sum2=p+q+r+s;
    printf("%d",sum1>sum2?sum1:sum2);
}