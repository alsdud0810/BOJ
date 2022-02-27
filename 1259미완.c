#include <stdio.h>
#include <string.h>

int main(){
    int n;
    while(n!=0){
        scanf("%d", &n);
        int l=strlen(n);
        int arr[l];
        while(n!=0){
            int i=0;
            arr[i]=n%10;
            n/=10;
        }
        int cnt=0;
        for (int i=0; i<l/2; i++){
            if (arr[i]==arr[l-i]) cnt++;
            else {
                cnt--;
            }
        }
        if (cnt==l/2) printf("yes\n");
        else printf("no\n");
    }
    
}