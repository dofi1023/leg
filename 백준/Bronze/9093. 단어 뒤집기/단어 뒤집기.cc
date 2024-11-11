#include <stdio.h>
#include <string.h>

char array[1001];
int start = 0;

int main() {

	int N, num;
	scanf("%d", &N);
	getchar();

	for (int i = 0; i < N;i++) {
		fgets(array, 1001, stdin);
		for (int j = 0;j < strlen(array);j++) {
			if (array[j] == 32 || array[j] == '\n') {
				for (int k = j - 1;k >= start;k--) {
					printf("%c", array[k]);
				}
				start = j + 1;
				printf(" ");
			}
		}
		printf("\n");	
		start= 0;
	}
	return 0;
}

		
