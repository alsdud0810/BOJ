#include <stdio.h>

int main(){
    int x, y;
    int n;
    int sum=0;
    for (int i=0;i <4;i++){
        scanf("%d",&n);
        sum+=n;
    }
    x=sum/60;
    y=sum%60;
    printf("%d\n%d",x,y);
}