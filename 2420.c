#include <stdio.h>

int main(){
    long long n, m;
    scanf("%lld %lld",&n,&m);

    long long result;
    result=n-m;
    if (n-m<0) result*=(-1);
    printf("%lld", result);
}