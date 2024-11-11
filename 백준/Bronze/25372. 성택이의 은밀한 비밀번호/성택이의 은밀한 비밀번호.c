#include<stdio.h>
#include<string.h>
int main() {
	int n = 0;
	char pass[21];
	int len = 0;
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		scanf("%s", pass);

		while (pass[len] != '\0') {
			len++;
		}
		if (len > 5 && len < 10) {
			printf("yes\n");
			len = 0;
		}
		else {
			printf("no\n");
			len = 0;
		}
	}
	return 0;
}
