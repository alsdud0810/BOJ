#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main(){
    int r;
    scanf("%d", &r);
    double u,t;
    u=M_PI*r*r;
    t=2*r*r;
    printf("%lf\n%lf",u,t);
}