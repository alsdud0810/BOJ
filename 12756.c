#include <stdio.h>

int main(){
    int ax,ay,bx,by;
    scanf("%d %d %d %d",&ax,&ay,&bx,&by);
    while(ay>0&&by>0){
        ay-=bx;
        by-=ax;
    }
    if (ay<=0&&by<=0) printf("DRAW");
    else if (ay<=0) printf("PLAYER B");
    else printf("PLAYER A");
}