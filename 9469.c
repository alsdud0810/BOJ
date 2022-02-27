#include <stdio.h>

int main(){
    int p;
    scanf("%d", &p);
    int n;
    double d,a,b,f;
    for (int i=0; i<p;i++){
        scanf("%d %lf %lf %lf %lf",&n,&d,&a,&b,&f);
        printf("%d %.6lf\n",n,(d/(a+b))*f);
    }
}