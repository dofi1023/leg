#include<stdio.h>
int main() {
	int num = 0;
	int max = 0;
	int jumsu[999] = { 0 };
	float newjumsu[999] = { 0 };
	float newavg = 0, sum = 0;
	scanf("%d", &num);
	for (int a = 0;a < num;a++) {
		scanf("%d", &jumsu[a]);
	}
	max = jumsu[0];
	for (int b = 1;b < num;b++) {
		if (max < jumsu[b])
			max = jumsu[b];
	}
	for (int c = 0;c < num;c++) {
		newjumsu[c] =  ((float)jumsu[c]/(float)max) * 100;
		sum = sum + newjumsu[c];
	}
	newavg = sum / num;

	printf("%f", newavg);
	return 0;
}
