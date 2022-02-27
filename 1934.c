#include <stdio.h>

int GCD(int a, int b){
    int gcd=0;

    for (int i=1; i<=a&&i<=b; i++){
        if (a%i==0 && b%i==0){
            gcd=i;
        }
    }return gcd;
}

int main(){
    int t, lcm;
    int n1, n2;
    scanf("%d", &t);
    for (int i=0; i<t; i++){
        scanf("%d %d", &n1, &n2);
        lcm = (n1*n2)/GCD(n1,n2);
        printf("%d\n",lcm);
    }
}