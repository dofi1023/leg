#include<stdio.h>
#include<math.h>
int main() {
	int sum = 0;
	int input[5];

	for (int i = 0;i < 5;i++) {
		scanf("%1d", &input[i]);
		sum = sum + pow(input[i], 5);
	}
	printf("%d\n", sum);

	return 0;
}