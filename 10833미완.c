#include <stdio.h>

int main(){

    int t;
    int stu,app;
    int sum=0;
    scanf("%d", &t);
    for (int i=0; i<t;i++){
        scanf("%d %d",&stu, &app);
        if (app%stu>stu) sum+=(app%stu)-1;
        else sum+=app%stu;
    }printf("%d\n",sum);
}