#include<stdio.h>
int main() {
	char mon[101];
	scanf("%s", mon);
	int m=0, o=0, b=0, i=0, s=0;
	for (int j= 0;mon[j] != '\0';j++) {
		if (mon[j] == 'M') {
			m++;
		}
		if (mon[j] == 'O') {
			o++;
		}
		if (mon[j] == 'B') {
			b++;
		}
		if (mon[j] == 'I') {
			i++;
		}
		if (mon[j] == 'S') {
			s++;
		}
	}
	
	if (m>=1&&o>=1&&b>=1&&i>=1&&s>=1)
		printf("YES");
	else
		printf("NO");
	return 0;
}