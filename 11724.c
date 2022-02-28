#include <stdio.h>

int arr[1001][1001];
int visit[1001];

void DFS(int a, int n){
    visit[a]=1;
    for (int i=1;i<=n;i++){
        if (arr[a][i]&&!visit[i])
            DFS(i, n);
    }

}

int main(){
    int n,m;
    int u,v, cnt=0;
    scanf("%d %d", &n,&m);
    for (int i=0;i<m;i++){
        scanf("%d %d",&u,&v);
        arr[u][v]=arr[v][u]=1;
    }
    for (int i=0;i<=n;i++){
        for (int j=1;j<=n;j++){
            if (arr[i][j]&&!visit[j]){
                DFS(j,n);
                cnt++;
            }
        }
    }
    for (int i=1;i<=n;i++){
        if (!visit[i]) cnt++;
    }printf("%d", cnt);
}

