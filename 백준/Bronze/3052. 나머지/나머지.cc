#include<stdio.h>
int main() {
	int input[10] = { 0 };
	int cnt = 0;
	int nmz[42] = { 0 };

	for (int i = 0; i < 10; i++) {
		scanf("%d", &input[i]);
	}
	for (int i = 0; i < 10; i++) {
		nmz[input[i] % 42]++;
	}

	for (int i = 0; i < 42; i++) {
		if (nmz[i] != 0)
			cnt++;
	}
	printf("%d", cnt);
}