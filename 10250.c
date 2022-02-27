#include <stdio.h>

int main(){
    int h, w, n;
    int t;
    int x,y;
    scanf("%d", &t);
    for (int i=0; i<t; i++){
        scanf("%d %d %d", &h, &w, &n);
        for(int j=0; j<h*w; j++){
            if (n>h*j){
                x=j+1;
                y=n-h*j;
            }
        }
        printf("%d%02d\n",y,x);
    }
}