#include <stdio.h>

int main(){
    int t,n,d,v,f,c;
    scanf("%d", &t);
    for (int i=0; i<t;i++){
        scanf("%d %d",&n,&d);
        int cnt=0;
        for (int j=0;j<n;j++){
            scanf("%d %d %d",&v,&f,&c);
            if (v*f/c>=d) cnt++;
        }printf("%d\n", cnt);
    }
}