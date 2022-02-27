#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int cnt=0;
    int result=2;
    if (n==1) printf("1");
    else{
        while(1){
            n/=2;
            if(n/2==0) break;
            cnt++;
        }
        for (int i=0;i<cnt;i++){
            result*=2;
        }printf("%d",result);
    }
}