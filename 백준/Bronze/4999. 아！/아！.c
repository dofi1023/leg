#include<stdio.h>
#include<string.h>
int main() {
	int cnt1=0, cnt2=0;
	char a[1000];
	char b[1000];

	scanf("%s", a);
	scanf("%s", b);


	if (strlen(a) > strlen(b))
		printf("go");
	else if (strlen(a) < strlen(b))
		printf("no");
	else
		printf("go");

	return 0;
}