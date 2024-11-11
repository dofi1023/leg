#include <stdio.h>
#include <string.h>

int main() {
	char str[500];

	while (1) {
		fgets(str,500, stdin);
		str[strlen(str) - 1] = '\0';

		if (strcmp(str, "END") == 0)
			break;

		for (int i = strlen(str) - 1; i >= 0; i--) {
			printf("%c", str[i]);
		}
		printf("\n");
	}

	return 0;
}
