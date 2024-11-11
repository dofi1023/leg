#include<stdio.h>
int main() {
	int a=0, b=0, c=0, d=0, e=0, sum = 0;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	scanf("%d", &e);

	sum = ((a * a) + (b * b) + (c * c) + (d * d) + (e * e)) % 10;
	printf("%d", sum);
}