#include <stdio.h>

int main(){
    int n, k;
    scanf("%d %d",&n,&k);
    int cnt=0;
    int i;
    for (i=1;i<=n;i++){
        if (n%i==0) cnt++;
        if (cnt==k) break;
    }
    if (i>n) printf("0");
    else printf("%d", i);
}