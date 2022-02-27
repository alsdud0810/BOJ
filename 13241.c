#include <stdio.h>

int GCD(int a, int b){
    if (b==0) return a;
    else return GCD(b,a%b);
}

int main(){
    long long a, b;
    scanf("%lld %lld", &a, &b);
    long long  gcd, lcm;
    gcd = GCD(a, b);
    lcm = (a*b)/gcd;
    printf("%d\n", lcm);
    
}