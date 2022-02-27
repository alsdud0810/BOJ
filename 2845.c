#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int arr[5];
    for (int i=0; i<5;i++){
        scanf("%d",&arr[i]);
        arr[i]-=a*b;
    }
    for (int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
}