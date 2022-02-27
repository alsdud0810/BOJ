#include <stdio.h>

int main(){
    int t;
    int m, n, x,y;
    scanf("%d", &t);
    for (int i=0; i<t;i++){
        scanf("%d %d %d %d",&m,&n,&x,&y);
        int cnt=0;
        int end=0;
        while(1){
            int tempx=x, tempy=y;
            tempy--;
            tempx--;
            if (tempx-tempy==0){
                end+=x<y?x:y;
                break;
            }
            if (y==0) tempy=n;
            if (x==0) tempx=m;
            end++;
        }
        while(1){
            int tempx=x, tempy=y;
            tempy--;
            tempx--;
            end--;
            if (tempx-tempy==0){
                cnt+=x<y?x:y;
                break;
            }
            if (tempy==0) y=n;
            if (tempx==0) x=m;
            cnt++;
        }
        if(end==(x<y?x:y)) printf("%d\n", cnt);
        else printf("-1");
    }
}