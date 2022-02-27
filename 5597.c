#include <stdio.h>

int main(){
    int call[30]={0, };
    int n;
    for (int i=0; i<28; i++){
        scanf("%d", &n);
        call[n-1]=1;
    }
    for(int i=0; i<30; i++){
        if (call[i]==0) printf("%d\n", i+1);
    }
}