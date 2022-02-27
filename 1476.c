#include <stdio.h>

int main(){
    int E,S,M;
    int e=1,s=1,m=1;
    int year=0;
    scanf("%d %d %d",&E,&S,&M);
    while(1){
        if(E==e&&S==s&&M==m) break;
        e+=1;
        s+=1;
        m+=1;
        if (e==16) e=1;
        if (s==29) s=1;
        if (m==20) m=1;
        year++;
    }printf("%d", year+1);
}