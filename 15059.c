#include <stdio.h>

int main(){
    int c,b,p;
    int cr,br,pr;
    scanf("%d %d %d %d %d %d",&c,&b,&p,&cr,&br,&pr);
    int sum=0;
    if (cr>c) sum+=cr-c;
    if (br>b) sum+=br-b;
    if (pr>p) sum+=pr-p;
    printf("%d", sum);
}