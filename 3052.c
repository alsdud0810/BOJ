#include <stdio.h>

int main(){
    int n, temp[10], answer=0;
    for (int i=0; i<10; i++){
        scanf("%d",&n);
        temp[i]=n%42;
    }

    for (int i=0; i<10; i++){
        int count=0;
        for (int j=0; j<i;j++){
            if (temp[i]==temp[j]){
                count++;
            }
        }

        if (count==0){
            answer++;
        }
    }printf("%d", answer);
}