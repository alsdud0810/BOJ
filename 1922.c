#include<stdio.h>
#include<stdlib.h>

#define MAX 10001

typedef struct{
	long long int value;
	int x;
	int y;
} data;

data mat[MAX*MAX];


int parent[MAX];
int num[MAX];

void Init(int n){
	for (int i=0; i<n; i++) {
		parent[i] = -1;
		num[i] = 1;
	}
}

int find(int vertex){
	int p, s, i = -1;
	for (i = vertex; (p = parent[i]) >= 0; i = p)
		;
	s = i;
	for (i = vertex; (p = parent[i]) >= 0; i = p)
		parent[i] = s;
	return s;
}

void Union(int s1, int s2){
	if (num[s1] < num[s2]){
		parent[s1] = s2;
		num[s2] += num[s1];
	}
	else {
		parent[s2] = s1;
		num[s1] += num[s2];
	}
}

int compare(const void *a, const void *b){
    int num1 = *(int *)a;
    int num2 = *(int *)b;
    if (num1 < num2)
        return -1;
    if (num1 > num2)
        return 1;
    
    return 0; 
}

int main(){
	int n,m;
	int uset, vset;
	long long int sum = 0;
	int count = 0;

	scanf("%d", &n);
	scanf("%d", &m);

	for (int i = 0; i < m; i++)
		scanf("%d %d %lld", &mat[i].x, &mat[i].y, &mat[i].value);

	qsort(mat, m, sizeof(mat[0]), compare);
	Init(n);

	for (int i=0;count<n-1;i++){
		uset=find(mat[i].x);
		vset=find(mat[i].y);
		if (uset!=vset){
			sum+=mat[i].value;
			Union(uset, vset);
			count++;
		}
	}printf("%lld", sum);
}