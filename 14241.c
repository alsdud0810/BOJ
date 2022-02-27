#include <stdio.h>

int main(){
    int t;
    int m;
    scanf("%d", &t);
    int sum=0;
    int score=0;
    int temp=0;
    for (int i=0; i<t; i++){
        temp=m;
        scanf("%d",&m);
        sum+=m;
        if (i==1){
            score+=temp*m;
        }
        else{
            if (sum!=m)
                score+=m*(sum-m);
        }
    }printf("%d", score);
}