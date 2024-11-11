#include<stdio.h>
int main() {
	int n, m, i, j, basket[101] = { 0 };
	scanf("%d %d", &n, &m);
	int temp;

	for (int a = 1; a <= n;a++) {
		basket[a] = a;
	}

	for (int b = 0;b < m;b++) {
		scanf("%d %d", &i, &j);
		temp = basket[i];
		basket[i] = basket[j];
		basket[j] = temp;	
	}

	for (int d = 1;d < n + 1;d++) {
		printf("%d ", basket[d]);
	}

	return 0;
}