#include<stdio.h>
int main(){
	int grade;
	grade = 0;
	scanf("%d", &grade);
	if (90 <= grade) {
		printf("A");
	}
	else if (80 <= grade && grade <= 89)
		printf("B");
	else if (70 <= grade && grade <= 79)
		printf("C");
	else if (60 <= grade && grade <= 69)
		printf("D");
	else
		printf("F");

	return 0;
	
}