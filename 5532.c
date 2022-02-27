#include <stdio.h>

int main(){
    int l, a,b,c,d;
    scanf("%d %d %d %d %d",&l,&a,&b,&c,&d);
    int x,y;
    x=a/c;
    y=b/d;
    int result;
    if (a%(x>y?x:y)==0){
        result=l-(x>y?x:y);
    }
    else{
        result=l-1-(x>y?x:y);
    }
    printf("%d",result);
}