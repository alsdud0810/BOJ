#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    int num1 = *(int *)a;
    int num2 = *(int *)b;

    if (num1 < num2)
        return -1;
    
    if (num1 > num2)
        return 1;
    
    return 0; 
}


int main(){
    int arr[4];
    for (int i=0;i<4;i++){
        scanf("%d",&arr[i]);
    }
    qsort(arr,sizeof(arr)/sizeof(int),sizeof(int),compare);
    int result;
    result=arr[0]*arr[2];
    printf("%d",result);

}