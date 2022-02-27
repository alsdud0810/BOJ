#include <stdio.h>

int main(){
    int n, k;
    int cnt=0;
    scanf("%d %d", &n,&k);
    int arr[1001];
    for (int i=2; i<=n;i++){
        arr[i]=i;
    }

    for (int i=2; i<=n; i++){
        while(arr[i]!=0){
            for (int j=i; j<=n; j+=i){
                if (arr[j]!=0){
                    arr[j]=0;
                    cnt++;
                }
                if (cnt==k){
                    printf("%d", j);
                    break;
                }
            }
        }
    }
}