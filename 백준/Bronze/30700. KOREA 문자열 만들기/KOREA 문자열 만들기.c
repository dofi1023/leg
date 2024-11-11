#include<stdio.h>
int main() {
	char korea[1001] = { 0 };
	char str[] = "KOREA";
	int cnt1 = 0;
	int cnt2 = 0;

	scanf("%s", korea);

	for (int j = 0; korea[j] !='\0';j++) {
		if (str[cnt2] == korea[j]) {
			cnt2 = (cnt2 + 1) % 5;
			cnt1++;
		}
	}

	printf("%d", cnt1);

	return 0;
}