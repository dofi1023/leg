#include <stdio.h>
int main()
{
	int num = 0;
	int k;
	
	scanf("%d", &num);

	int w[50] = { 0 };
	int h[50] = { 0 };

	for (int i = 0; i < num; i++)
		scanf("%d %d", &w[i], &h[i]);

	for (int j = 0; j < num; j++)
	{
		k = 0;
		for (int n = 0; n < num; n++) {
			if (w[j] < w[n] && h[j] < h[n])
				k++;
		}
		printf("%d ", k + 1);  
	}
	return 0;
}
