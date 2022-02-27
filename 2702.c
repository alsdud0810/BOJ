#include <stdio.h>

int GCD(int a, int b){
    if (b==0) return a;
    else return GCD(b,a%b);
}

int main(){
    int t;
    scanf("%d", &t);
    for (int i=0;i<t;i++){
        int a, b;
        scanf("%d %d", &a, &b);
        int gcd, lcm;
        gcd = GCD(a, b);
        lcm = (a*b)/gcd;
        printf("%d %d\n",lcm,gcd);
    }
    
}