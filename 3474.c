#include <stdio.h>

int fact(int n){
    if (n==0) return 1;
    return n*fact(n-1);
}

int main(){
    int t,n;
    scanf("%d", &t);
    for (int i=0; i<t;i++){
        scanf("%d",&n);
        int five=0;
        int two=0;
        for (int j=5; j<=n; j*=5){
            five+=n/j;
        }
        for (int j=2; j<=n; j*=2){
            two+=n/j;
        }

        if (five>two) printf("%d", two);
        else printf("%d\n", five);
    }
}