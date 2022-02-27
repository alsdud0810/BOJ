#include <stdio.h>

int main(){
    int b,c;
    int minB=2001, minC=2001;
    for (int i=0; i<3; i++){
        scanf("%d",&b);
        if (b<minB) minB=b;        
    }
    for (int i=0; i<2; i++){
        scanf("%d", &c);
        if (c<minC) minC=c;
    }
    printf("%d", minB+minC-50);
}