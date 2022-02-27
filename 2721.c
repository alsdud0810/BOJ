#include <stdio.h>

int main(){
    int t;
    int n;
    scanf("%d", &t);
    for (int i=0; i<t;i++){
        int sum=0;
        scanf("%d", &n);
        while(1){
            int plus=0;
            int temp=n+1;
            while(1){
                if(temp==0) break;
                plus+=temp;
                temp--;
            }
            sum+=n*plus;
            n--;
            if (n==0) break;
        }printf("%d\n", sum);
    }
}