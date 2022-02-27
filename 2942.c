#include <stdio.h>

//최대공약수 문제: 유클리드 호제법
int GCD(int a, int b){
    if (b==0) return a;
    else return GCD(b,a%b);
}

int main(){
    int R,G;
    scanf("%d %d", &R, &G);
    int gcd=GCD(R,G);
    int p,r,g;
    for (int i=1;i<=gcd;i++){
        if (gcd%i==0){
            p=i;
            r=R/p;
            g=G/p;
            printf("%d %d %d\n",p,r,g);
        }
    }
    
}