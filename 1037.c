#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int min=1000001,max=1;
    int input;
    for (int i=0; i<n; i++){
        scanf("%d", &input);
        if (input<min){
            min=input;
        }
        if (input>max){
            max=input;
        }
    }printf("%d", min*max);


}