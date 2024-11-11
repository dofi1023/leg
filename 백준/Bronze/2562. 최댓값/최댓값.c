#include<stdio.h>
int main() {
	int max = 0;
	int n[10];
	int num = 0;

	for (int i = 0; i < 9; i++) {
		scanf("%d", &n[i]);
		if (max < n[i]) {
			max = n[i];
			num = i;
		}
	}
	
	printf("%d\n%d ", max, num+1);

	return 0;
}