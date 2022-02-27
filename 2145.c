#include <stdio.h>

int main(){
    int n;
    while(1){
        scanf("%d",&n);
        if (n==0) break;
        int result;
        int temp;
        while(n>9){
            temp=n;
            result=0;
            while(temp>0){
                result+=temp%10;
                temp/=10;
            }n=result;
        }printf("%d\n",n);
    }
}