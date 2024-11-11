#include <stdio.h>
#include <stdlib.h>
int main(void)
{   
	int sum=0;
	int in = 0, out = 0, max = 0;
	for (int i = 0;i < 10;i++) {
		scanf("%d %d", &out, &in);
		sum = sum + in - out;
		if (sum > max)
			max = sum;
	}
	printf("%d\n", max);
	return 0;
}
