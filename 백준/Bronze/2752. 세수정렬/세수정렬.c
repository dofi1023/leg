#include <stdio.h>
int main() {
	int a=0,b=0,c=0;
	int max, min, n;
	scanf("%d %d %d", &a, &b, &c);

	if (a > b && a > c)
		max = a;
	if (b > a && b > c)
		max = b;
	if (c > a && c > b)
		max = c;
	if (a < b && a < c)
		min = a;
	if (b < a && b < c)
		min = b;
	if (c < a && c < b)
		min = c;
	if (max == a && min == b)
		n = c;
	if (max == b && min == a)
		n = c;
	if (max == b && min == c)
		n = a;
	if (max == c && min == b)
		n = a;
	if (max == a && min == c)
		n = b;
	if (max == c && min == a)
		n = b;

	printf("%d %d %d", min, n, max);



	return 0;
}