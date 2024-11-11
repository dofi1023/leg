#include<stdio.h>
int main() {
	int n, m;
	int basket[101] = { 0 };
	int i, j, k;
	scanf("%d %d", &n, &m);

	for (int t = 0;t < m;t++) {
		scanf("%d %d %d", &i,&j,&k);
		for (int a = i;a <= j;a++) {
			basket[a] = k;
		}
	}
	
	for (int w = 1;w < n+1 ;w++) {
		printf("%d ", basket[w]);
	}
	return 0;
}