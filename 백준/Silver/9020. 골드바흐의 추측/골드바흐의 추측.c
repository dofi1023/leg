#include<stdio.h>
int is_prime[10001];

void era(int n){
	{
		for (int i = 4; i <= n; i += 2) // 2의 배수없애주기
			is_prime[i] = 1;
		for (int i = 3; i * i <= n; i += 2) // 3의 배수 없애주기
		{
			if (is_prime[i]==1)
				continue;
			for (int j = i*i ; j <= n ; j += i) // 홀수의 배수들 없애주기
			{
				is_prime[j] = 1;
			}
		}
	}
}

int main() {
	int n = 0;
	int a;
	scanf("%d", &n);
	era(10000);
	for (int i = 0;i < n;i++) {
		scanf("%d", &a);
		for (int j = a/2;j >=2 ;j--) {
			if (is_prime[a - j] == 0 && is_prime[j] == 0)
			{
				printf("%d %d\n", j, a - j);
				break;
			}
		}
	}

	return 0;
}