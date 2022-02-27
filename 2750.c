#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    int num1 = *(int *)a;
    int num2 = *(int *)b;

    if (num1 < num2)
        return -1;
    
    if (num1 > num2)
        return 1;
    
    return 0; 
}

int main(){
    int t;
    scanf("%d", &t);
    int a[t];
    for (int i=0; i<t; i++){
        scanf("%d",&a[i]);
    }
    qsort(a,sizeof(a)/sizeof(int),sizeof(int),compare);
    for (int i=0; i<t; i++){
        printf("%d\n",a[i]);
    }
}