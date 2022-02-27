#include <stdio.h>

int main(){
    int t;
    int a, b;
    scanf("%d",&t);
    for (int i=0; i<t; i++){
        scanf("%d %d",&a,&b);
        int c=1;
        for (int j=0; j<b;j++){
            c *=a;
            c%=10;
        }
        if (c==0) printf("10\n");
        else {
            printf("%d\n", c);
        }
    }
}