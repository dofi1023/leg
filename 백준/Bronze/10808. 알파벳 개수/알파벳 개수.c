#include<stdio.h>
int main() {
	char mon[101];
	int abc[26] = { 0 };
	scanf("%s", mon);

	for (int i = 0;mon[i] != '\0';i++) {
		for (int j = 0;j<26;j++) {
			if (mon[i] == 97 + j)
				abc[j]++;
		}
	}

	for (int i = 0;i<26;i++){
		printf("%d ", abc[i]);
	}
	return 0;
}