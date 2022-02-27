#include <stdio.h>

void bubble_sort(int arr[], int count){
    int temp;

    for (int i = 0; i < count; i++){
        for (int j = 0; j < count - 1; j++){
            if (arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int avg, mid, mode,ran;
    int sum=0;
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        sum+= arr[i];
    }
    //소수 첫째 반올림값
    avg=sum/n;
    bubble_sort(arr,n);
    for (int i=0; i<n; i++){
        int temp;
        temp=arr[0];
        int flag=0;
        if (arr[i]==arr[i+1]){
            flag++;
        }

    }
    
}