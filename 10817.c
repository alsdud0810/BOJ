#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int max=0;
    if (a>=b){
        if (b>=c) printf("%d", b);
        else{
            if (a>=c) printf("%d", c);
            else printf("%d", a);
        }
    }
    else{
        if(a>=c)printf("%d",a);
        else {
                if (b>=c) printf("%d", c);
                else printf("%d", b);
        }
    }
}