#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int plus=1, sum=0;
    int ox;
    for (int i=0;i<n;i++){
        scanf("%d",&ox);
        if (ox==1){
            sum+=plus;
            plus++;
        }
        else plus=1;
    }printf("%d\n", sum);
    return 0;
}