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
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    int gcd, lcm;
    gcd = GCD(n1, n2);
    lcm = (n1*n2)/gcd;
    printf("%d\n%d", gcd, lcm);


}