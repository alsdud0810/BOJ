#include <stdio.h>

int main(){
    int max=-1;
    int in, out, p=0;
    for (int i=0; i<4; i++){
        scanf("%d %d", &out, &in);
        p+=in-out;
        if (max<p) max=p;
    }printf("%d",max);
}