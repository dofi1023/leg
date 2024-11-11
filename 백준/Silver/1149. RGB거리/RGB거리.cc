#include<stdio.h>
int r[1001], g[1001], b[1001];
int min(int a, int b) {
	if (a < b) return a;
	else return b;
}

int main() {
	int gib = 0;
	int dr[1001] = { 0 }, dg[1001] = { 0 }, db[1001] = { 0 };
	
	scanf("%d", &gib);

	for (int i = 1;i <= gib;i++) {
		scanf("%d %d %d", &r[i], &g[i], &b[i]);
	}

	for (int n = 1;n <= gib;n++) {
		dr[n] = r[n] + min(dg[n - 1], db[n - 1]);
		dg[n] = g[n] + min(dr[n - 1], db[n - 1]);
		db[n] = b[n] + min(dr[n - 1], dg[n - 1]);
	}

	if (dr[gib] <= dg[gib] && dr[gib] <= db[gib])
		printf("%d", dr[gib]);
	else if (dg[gib] < dr[gib] && dg[gib] < db[gib])
		printf("%d", dg[gib]);
	else
		printf("%d", db[gib]);

	return 0;

}