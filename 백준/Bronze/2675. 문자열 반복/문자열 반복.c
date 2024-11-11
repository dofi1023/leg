#include<stdio.h>
#include<string.h>
int main() {
	int testcase = 0;
	scanf("%d", &testcase);
		
	for (int i = 0;i < testcase;i++) {
		int a = 0;
		char s[20];
		scanf("%d %s", &a, s);
		for (int i = 0;i < strlen(s);i++) {
			for (int j = 0;j < a;j++) {
				printf("%c", s[i]);
			}
		}
        printf("\n");
	}
	return 0;
}