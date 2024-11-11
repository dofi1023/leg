#include<stdio.h>
int main() {
	char dan[1001] = { 0 };
	int i = 0;
	
	scanf("%s", dan);
	scanf("%d", &i);

	printf("%c", dan[i - 1]);
}