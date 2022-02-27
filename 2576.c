#include <stdio.h>

int main(){
    int num;
    int min=101, sum=0;
    for (int i=0; i<7; i++){
        scanf("%d", &num);
        if (num%2==1){
            sum+=num;
            if (min>num) min=num;
        }
    }
    if (sum==0) printf("-1");
    else printf("%d\n%d",sum,min);
    return 0;
}