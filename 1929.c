#include <stdio.h>

void Eratos(int n, int m){
    if (n<=1) return;

    int arr[1000001];
    
    for (int i=2; i<=n; i++){
        arr[i]=1;
    }

    for (long long i=2; i*i<=n; i++){
        if (arr[i]==1){
            for (long long j=i*i; j<=n; j+= i){
                arr[j]= 0;
            }
        }
    }
    for (long long i=2; i*i<=n; i++){
        if (arr[i]==1) printf("%d\n", i);
    }
}

int main(){
    int m, n;
    scanf("%d %d", &m, &n);

    Eratos(n,m);
}