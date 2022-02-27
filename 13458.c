#include <stdio.h>

int main(){
    int n;
    int b, c;
    long long sum=0;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d ",&a[i]);
    }
    scanf("%d %d",&b,&c);
    for (int i=0;i<n;i++){
        if (a[i]-b>0){
            a[i]-=b;
            sum++;
            if(a[i]%c==0){
                sum+=a[i]/c;
            }
            else{
                sum+=a[i]/c+1;
            }
            
        }
        else{
            sum++;
        }
    }printf("%lld", sum);
}