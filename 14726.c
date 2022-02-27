#include <stdio.h>

int main(){
    int t, n[16];
    scanf("%d", &t);
    for (int i=0; i<t;i++){
        
        for (int j=0;j<16;j++){
            scanf("%1d",&n[j]);
        }
        for (int j=0; j<16;j+=2){
            n[j]*=2;
            if (n[j]>=10){
                n[j]=n[j]/10+n[j]%10;
            }
        }
        int sum=0;
        for (int j=0; j<16; j++){
            sum+=n[j];
        }
        if (sum%10==0) printf("T\n");
        else printf("F\n");
    }return 0;
}