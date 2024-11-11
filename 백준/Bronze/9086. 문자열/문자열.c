#include<stdio.h>
#include<string.h>
//strlen
int main() {
	int n = 0;
	char start;
	char last;
	char dan[999] = { 0 };

	scanf("%d", &n);

	for (int i = 0;i < n;i++) {
		scanf("%s", dan);
			start = dan[0];
			last = dan[strlen(dan) - 1];
			printf("%c%c\n", start, last);
		
	}
	return 0;
}