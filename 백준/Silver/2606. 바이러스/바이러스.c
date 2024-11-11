#include<stdio.h>
#include<malloc.h>
int mat[101][101];
int visited[101];
int cnt = 0;
void dfs(int t, int n) {
	visited[t] = 1;
	for (int i = 1;i <= n;i++) {
		if (visited[i] == 1 || mat[t][i] == 0)
			continue; //이미 방문 or 연결 없음
		cnt++;
		dfs(i, n);
	}
}

int main() {
	
	int com,linkedcom,a,b;
	
	scanf("%d", &com);
	scanf("%d", &linkedcom);
	for (int i = 0;i < linkedcom;i++) {
		scanf("%d %d", &a, &b);
		mat[a][b] = 1;
		mat[b][a] = 1;
	}
	dfs(1, com);
	printf("%d", cnt);

}