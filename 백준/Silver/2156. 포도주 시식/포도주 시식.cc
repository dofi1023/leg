#include <stdio.h>

int dp[10001] = { 0 };
int wine[10001] = { 0 };

int maximum(int a,int b, int c) {
	if (a >= b && a >= c) return a;
	if (b >= c && b >= a) return b;
	else return c;
}

int main() {
	int cup = 0;
	scanf("%d", &cup);
	
	for (int i = 1;i <= cup;i++) {
		scanf("%d", &wine[i]);
	}
	
	dp[0] = 0;
	dp[1] = wine[1];
	dp[2] = wine[1] + wine[2];
	
	for (int i = 3;i <= cup;i++) {
		dp[i] = maximum(dp[i - 1], wine[i] + dp[i - 2], wine[i] + wine[i - 1] + dp[i - 3]);
	}
	printf("%d", dp[cup]);
	return 0;
}