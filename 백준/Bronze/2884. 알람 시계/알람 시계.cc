#include<stdio.h>
int main() {
	int h, m, time;
	h = 0;
	m = 0;
	time = 0;
	scanf("%d %d", &h, &m);

	m -= 45;
	if (m < 0) {
		m += 60;
		h -= 1;
	
		if (h < 0)
		h = 23;
	}

	printf("%d %d", h, m);
	return 0;
}