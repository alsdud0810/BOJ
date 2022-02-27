#include <stdio.h>
#include <stdlib.h>

int GCD(int a, int b){
    if (b==0) return a;
    else return GCD(b,a%b);
}

int main(){
    int n,s;
    scanf("%d %d",&n,&s);
    int a;
    int arr[n+1];
    for (int i=0;i<n;i++){
        scanf("%d",&a);
        a=s-a;
        if (a<0) a*=-1;
        arr[i]=a;
    }
    int result=arr[0];
    for (int i=1;i<n;i++){
        result=GCD(result,arr[i]);
    }printf("%d", result);
}