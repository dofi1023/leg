#include<stdio.h>
int main() {
	
	int now = 0;
	int max = 0;
	for (int i = 0;i < 4;i++) {
		int in = 0, out = 0;
		scanf("%d %d", &out, &in);
		now += in;
		now -= out;
		if (max < now)
			max = now;
	}
	printf("%d", max);
	
	return 0;
}