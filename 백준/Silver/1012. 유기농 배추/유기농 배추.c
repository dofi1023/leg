#include <stdio.h>
void dfs(int x, int y);
void testcase();
int bat[50][50] = { 0 };
int x, y;
int dx[] = { 1,0,-1,0 };
int dy[] = { 0,1,0,-1 };
int worm = 0, w,h,chuw, chuh;
int test, chu;
int main() {
	
	scanf("%d", &test);
	for(int i=0;i<test;i++){
		testcase();
	}
	return 0;
}	
void dfs(int x, int y) 
{
	for (int i = 0;i < 4;i++) {
		int nx = dx[i] + x;
		int ny = dy[i] + y;
		if (nx<0 || ny<0 || nx>=w || ny>=h) 
			continue;
		if (bat[nx][ny] == 0)
			continue;
		else if (bat[nx][ny] == 1) {
			bat[nx][ny] = 0;
			dfs(nx, ny);
		}
	}
}

void testcase() {

		scanf("%d %d %d", &w, &h, &chu);
		for (int i = 0;i < chu;i++) {
			scanf("%d %d", &chuw, &chuh);
			bat[chuw][chuh] = 1;
		}
		for (int i = 0;i < w;i++) {
			for (int j = 0;j < h;j++) {
				if (bat[i][j] == 1)
				{
					bat[i][j] = 0;
					dfs(i, j);
					worm += 1;
				}
			}
		}
		printf("%d\n", worm);
		worm = 0;
}