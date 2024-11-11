
#include <stdio.h>

int main()
{
	int i, j, sum = 0, win = 0, count = 0;
	int b[5][4];
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &b[i][j]);
			sum += b[i][j];
		}
		if (win < sum)
		{
			win = sum;
			count = i + 1;
		}
		sum = 0;
	}
	printf("%d %d", count, win);
}