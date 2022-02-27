#include <stdio.h>

int main(){
    int t;
    int n;
    scanf("%d", &t);
    long long arr[1000];
    arr[0]=0, arr[1]=1, arr[2]=1, arr[3]=1, arr[4]=2, arr[5]=2;
    for (int i=0; i<t; i++){
        scanf("%d", &n);

        for (int i=6; i<=n;i++){
            arr[i]=arr[i-1]+arr[i-5];
        }printf("%lld\n", arr[n]);
    }
    
}