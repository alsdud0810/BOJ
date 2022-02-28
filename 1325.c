#include <stdio.h>
#include <vector>
#include <string.h>
#define MAX 10050
using namespace std;

int N,M,cnt,sol;
vector<int> company[MAX];
int visited[MAX];
int Count[MAX];

void DFS(int x){
	visited[x] = 1;
	for (int i=0;i<company[x].size();i++){
		int next=company[x][i];
        if (visited[next] == 0){
			cnt++;
			DFS(next);
		}
	}
}


int main(){
	scanf("%d %d", &N, &M);
	for (int i=1;i<=M;i++){
		int num1,num2;
		scanf("%d %d",&num1,&num2);
		company[num2].push_back(num1);
	}
	for (int i=1;i<=N;i++){
		cnt=0;
		memset(visited,0,sizeof(visited));
		DFS(i);
		if (sol<=cnt) sol=cnt;
		if (Count[i] <= cnt) Count[i] = cnt;
	}
	for (int i=1;i<=N;i++){
		if (Count[i]==sol) printf("%d ", i);
	}
	return 0;
}