#include <stdio.h>

int main(){
    int s;
    
    int num=1;
    int max=0;
    for (int i=0; i<5; i++){
        int sum=0;
        for (int j=0; j<4;j++){
            scanf("%d",&s);
            sum+=s;
            if (sum>max) {
                max=sum;
                num=i;
            }
        }
    }printf("%d %d", num+1,max);
}