#include <stdio.h>
int main() {
	int n;
	int a[100];
	int r;
	int count = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}	
	scanf("%d", &r);

	for (int j = 0; j < n; j++ ) {
		if (a[j] == r)
			count++;
	}
	printf("%d", count);

	return 0;
}