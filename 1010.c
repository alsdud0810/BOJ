#include <stdio.h>

double Facto(int a){
    if (a==0){
        return 1;
    }
    return a* Facto(a-1);
}

int main(){
    int n, r;
    int t;
    scanf("%d", &t);
    for (int i=0; i<t; i++){
        double result;
        scanf("%d %d",&r, &n);
        result=(Facto(n)/(Facto(r)*Facto(n-r)));
        printf("%.f\n", result);
    }
}