//BFS문제
//인터넷 참고+공부
#include <stdio.h>

int graph[101][101]= {0, };
int q[10001][2]= {0, };
int n=0,m=0;
int dirX[4]={-1,1,0,0};
int dirY[4]={0,0,-1,1};

int BFS(){
    int front=0;
    int rear=0;
    q[front][0]=1;
    q[front][1]=1;
    rear++;
    
    while(1){
        if (rear<=front) break;
        int x=q[front][0];
        int y=q[front][1];
        front++;
        for(int i=0;i<4;i++) {
            int nextx=x+dirX[i];
            int nexty=y+dirY[i];
            if(nextx<1||nexty<1||nextx>n||nexty>m) continue;
            if(graph[nextx][nexty]!= 1) continue;

            graph[nextx][nexty]=graph[x][y]+1;
            q[rear][0]=nextx;
            q[rear][1]=nexty;
            rear++;
        }
    }return graph[n][m];
}

int main(){
    scanf("%d %d", &n, &m);
    for(int i =1;i<=n;i++){
        for(int j=1;j<=m;j++){
            scanf("%1d",&graph[i][j]);
        }
    }
    int result=BFS();
    printf("%d",result);
}