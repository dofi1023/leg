#include<stdio.h>
int main(void)
{
	int a, b;
	a = 0;
	b = 0;
	scanf("%d %d", &a, &b);

	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%d\n", a / b);
	printf("%d\n", a % b);

	return 0;
}
