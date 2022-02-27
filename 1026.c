#include <stdio.h>

//오름
void bubble1(int arr[], int count){
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

//내림
void bubble2(int arr[], int count){
    int temp;

    for (int i = 0; i < count; i++){
        for (int j = 0; j < count - 1; j++){
            if (arr[j] < arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(){
    int n, S=0;
    scanf("%d", &n);
    int A[n], B[n];
    for (int i=0; i<n; i++){
        scanf("%d",&A[i]);
    }
    for (int i=0; i<n; i++){
        scanf("%d",&B[i]);
    }

    bubble1(A, n);
    bubble2(B, n);

    for (int i=0; i<n; i++){
        S+= A[i]*B[i];
    }printf("%d", S);


}