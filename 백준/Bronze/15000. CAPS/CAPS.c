#include<stdio.h>

int main() {
	char abc[1000001];
	scanf("%s", abc);
	for (int i = 0;abc[i] != '\0';i++) {
		abc[i] = abc[i] - 'a'+'A';
	}
	
	printf("%s", abc);
	return 0;
}