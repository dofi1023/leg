#include<stdio.h>
int bot[500001] = { 0, }, top[500001] = { 0, };

int main() {
	int n, h, tmp, ans = 200000, cnt = 0;
	scanf("%d %d", &n, &h);
	for (int i = 0; i < n / 2; i++) {
		scanf("%d", &tmp);
		bot[tmp]++;
		scanf("%d", &tmp);
		top[tmp]++;
	}

	int suk = n / 2;
	int jong = 0;
	for (int i = 0; i < h;i++) {
		tmp = suk + jong;
		if (tmp < ans) {
			ans = tmp;
			cnt = 1;
		}
		else if (tmp == ans)cnt++;

		suk -= bot[i];
		jong += top[h - i];
	}
	printf("%d %d", ans, cnt);
}