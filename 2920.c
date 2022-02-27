#include <stdio.h>

int main(){
    int input[8];
    int cnt=0;
    for (int i=0; i<8;i++){
        scanf("%d", &input[i]);
        if (i+1==input[i]) cnt++;
        else if(8-i==input[i]) cnt--;
        else break;
    }
    if (cnt==8) printf("ascending");
    else if (cnt==-8) printf("descending");
    else printf("mixed");
}