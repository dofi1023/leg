#include <stdio.h>
int main(void){
	int num;
	int a[1000000];
	int max;
	int min;

	scanf("%d", &num);
	
	for (int i = 0; i < num; i++) {
		scanf("%d", &a[i]);
	}

	max = a[0];
	min = a[0];

	for (int j = 0; j < num; j++) {
		if (max < a[j])
			max = a[j];
		if (min > a[j])
			min = a[j];
	}
	
	printf("%d %d", min, max);

	return 0;
	
}