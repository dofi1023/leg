#include<stdio.h>

int main() {
	int s = 0;
	int sum = 0;
	for (int i = 0;i < 5;i++) {
		scanf("%d", &s);
		sum = sum + s;
	}
	printf("%d", sum);
	return 0;
}