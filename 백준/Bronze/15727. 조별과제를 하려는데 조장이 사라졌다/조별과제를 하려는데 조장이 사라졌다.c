#include<stdio.h>
int main() {
	int a = 0, b=0;
	scanf("%d", &a);
	for (int i = 0;i < a;i++) {
		b = a / 5;
		if (a % 5)
			b++;
	}
	printf("%d", b);
	return 0;
}