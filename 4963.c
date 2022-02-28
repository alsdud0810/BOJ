#include <stdio.h>

int arr[52][52], visit[52][52];
int dirX[8]={0,0,-1,-1,-1,1,1,1};
int dirY[8]={-1,1,1,0,-1,1,-1,0};
int w,h;

void init(){
	for (int i=1;i<=h;i++){
		for (int j=1; j<=w;j++){
			arr[i][j]=0;
			visit[i][j]=0;
		}
	}
}

int BFS(int y,int x){
	if (!arr[y][x]||visit[y][x]) return 0;
	visit[y][x]=1;
	for (int i=0;i<8;i++){
		int nextx=x+dirX[i];
		int nexty=y+dirY[i];
		if (arr[nexty][nextx]&&!visit[nexty][nextx]) BFS(nexty,nextx);
	}return 1;
}

int main(){
	while(1){
		
		int cnt=0;
		scanf("%d %d",&w,&h);
		init();
		if (w==0&&h==0) break;
		for (int i=1;i<=h;i++){
			for (int j=1;j<=w;j++){
				scanf("%d",&arr[i][j]);
			}
		}
		for (int i=1;i<=h;i++){
			for (int j=1;j<=w;j++){
				cnt+=BFS(i,j);
			}
		}printf("%d\n",cnt);
	}
}