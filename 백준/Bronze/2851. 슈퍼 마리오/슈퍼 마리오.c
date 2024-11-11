#include<stdio.h>
#include<stdlib.h>
int main() {
	int score=0, sum = 0, close=0, m_dif=100;
	for (int i = 0; i < 10;i++) {
		scanf("%d", &score);
		sum += score;

		int dif = abs(sum - 100);

		if (dif < m_dif) {
			m_dif = dif;
			close = sum;
		}
		else if (dif == m_dif)
			close = sum;
		if (sum >= 100)
			break;
	}
	printf("%d", close);
	return 0;
}
