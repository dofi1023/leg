#include<stdio.h>
int main(void)
{
	int a, b;
	a = 0;
	b = 0;
	scanf("%d %d", &a, &b);
	printf("%.9f\n", (double)a / b);
	return 0;

}