#include <stdio.h>

int main(){
    int t;
    int input;
    int o=0, x=0;
    scanf("%d", &t);
    for (int i=0;i<t;i++){
        scanf("%d", &input);
        if (input==1) o++;
        else x++;
    }
    if (o>x){
        printf("Junhee is cute!");
    }
    else{
        printf("Junhee is not cute!");
    }
}