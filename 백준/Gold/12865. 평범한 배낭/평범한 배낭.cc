#include<stdio.h>
int max(int a, int b) {
	if (a > b)return a;
	else return b;
}

int dp[101][100001];
int main() {
	int w[101] = { 0 }, v[101] = { 0 };
	int n, k;

	scanf("%d %d", &n, &k);

	for (int i = 1; i <= n; i++) {
		scanf("%d %d", &w[i], &v[i]);
	}
	
	for (int i = 1;i <= n;i++) {
		for (int j = 1;j <= k;j++) {
			if (j < w[i]) {
				dp[i][j] = dp[i - 1][j]; 
				continue;
			}
			dp[i][j] = max(dp[i - 1][j], v[i] + dp[i - 1][j - w[i]]);

		}
	}
	printf("%d", dp[n][k]);
	return 0;

}