#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    if (n==1){
        printf("0");
    }
    else{
        int result;
        result=2*pow(3,n-2);
        printf("%d", result);
    }
    

}