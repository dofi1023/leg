#include<stdio.h>
int main(void) {
	int h, m, oven;
	scanf("%d %d\n", &h, &m);
	scanf("%d", &oven);

	m = m + oven;
	if (m >= 60) {
		h = h + (m/ 60);
		m = m % 60;
		if (h >= 24) {
			h = h % 24;
		}
	}
	printf("%d %d", h, m);
	return 0;
}