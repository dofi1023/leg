#include<stdio.h>
int main() {
	int cnt = 0;
	char str[101] = { 0 };

	scanf("%s", &str);

	for (int i = 0; i < 100;i++) {
		if (str[i] != 0) {
			cnt++;
		}
	}
	printf("%d", cnt);
}