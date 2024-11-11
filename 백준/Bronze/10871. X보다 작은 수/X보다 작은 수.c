#include <stdio.h>
int main() {
	int n;
	int a[10001];
	int x;
	
	scanf("%d %d", &n, &x);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}	
	
	for (int j = 0; j < n; j++ ) {
		if (a[j] < x)
			printf("%d ", a[j]);
	}
	
	return 0; 
}