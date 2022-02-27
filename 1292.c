#include <stdio.h>

int main(){
    int s,e;
    scanf("%d %d",&s,&e);
    int temp1=e;
    int temp2=s-1;
    int i=1,j=1;
    int sum1=0, sum2=0;
    while(1){
        temp1-=i;
        if (temp1<0) break;
        sum1+=i*i;
        i++;
    }
    int sumE=sum1+(i+temp1)*i;
    while(1){
        temp2-=j;
        if (temp2<0) break;
        sum2+=j*j;
        j++;
    }
    int sumS=sum2+(j+temp2)*j;
    printf("%d",sumE-sumS);
}