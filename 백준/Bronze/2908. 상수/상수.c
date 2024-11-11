#include<stdio.h>
#include<stdlib.h>
int main() {
	char num1[4];
	char num2[4];

	scanf("%3s", num1);
	scanf("%3s", num2);

	char temp;
	temp = num1[0];
	num1[0] = num1[2];
	num1[2] = temp;
	
	char temp2;
	temp2 = num2[0];
	num2[0] = num2[2];
	num2[2] = temp2;

	int renum1 = atoi(num1);
	int renum2 = atoi(num2);

	if (renum1 < renum2) {
		printf("%d", renum2);
	}
	else {
		printf("%d", renum1);
	}
	return 0;
}