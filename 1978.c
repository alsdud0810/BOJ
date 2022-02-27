#include <stdio.h>

int arr[1001]={0, };

void Eratos(int n){
    if (n <= 1) return;    

	for (int i = 2; i * i <= n; i++){
		if (arr[i])
			for (int j = i * i; j <= n; j += i)
			    arr[j] = 1;
	}
}

int main(){
    int n;
    int input;
    int count=0;
    for (int i=0; i<n; i++){
        scanf("%d ",&input);
        Eratos(input);
    }
    for (int i=0; i<n; i++){
        if(arr[i]==1) count++;
    }printf("%d", count);

}