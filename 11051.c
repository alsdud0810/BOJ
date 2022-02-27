#include <stdio.h>

int main(){
    int n, k;
    scanf("%d %d",&n, &k);
    int a[1001][501];
    if (k>(n/2)) k=n-k;

    for(int i=1;i<=n;i++){
        for (int j=0; j<=i&&j<=k;j++){
            if (j==0 || j==i) a[i][j]=1;
            else{
                a[i][j]=a[i-1][j-1] + a[i-1][j];
            }a[i][j]=a[i][j]%10007;
        }
    }printf("%d", a[n][k]);
}