#include<stdio.h>
int main() {
	int yunc, yund, dalc, dald, poc, pod, heart, time=0;
	scanf("%d %d", &yunc, &yund);
	scanf("%d %d", &dalc, &dald);
	scanf("%d %d", &poc, &pod);
	scanf("%d", &heart);

	while (1) {

		if (time % yunc == 0) {
			heart -= yund;
		}
		if (time % dalc == 0) {
			heart -= dald;
		}
		if (time % poc == 0) {
			heart -= pod;
		}
		if (heart <= 0)
			break;
		
		
		time++;
	}
	printf("%d", time);
	return 0;

}