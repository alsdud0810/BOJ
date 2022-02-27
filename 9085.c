#include <stdio.h>

int main(){
    int t;
    int n;
    
    scanf("%d", &t);
    for (int i=0;i<t;i++){
        scanf("%d", &n);
        int sum=0,num;
        for (int i=0;i<n;i++){
            scanf("%d",&num);
            sum+=num;
        }printf("%d\n", sum);
    }
}