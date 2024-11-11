#include<stdio.h>
int main() {
	int a = 0, b = 0;
	scanf("%d", &a);
	scanf("%d", &b);


	for (int i = 0;i < a;i++) {
		for (int j = 0;j < b;j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}