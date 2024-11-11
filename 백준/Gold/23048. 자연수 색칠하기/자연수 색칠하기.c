#include<stdio.h>
#include<malloc.h>
int arr[500001];
int cnt = 1;
void era(int n){
	{
		arr[1] = cnt++;
		for (long long i = 2; i <= n; i++) {
			if (arr[i] == 0) {
				arr[i] = cnt++;
			}
			for (long long j = i * i; j <= n; j += i)
			{
					arr[j] = arr[i];
			}
		}
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	
	era(n);
	printf("%d\n", cnt-1);
	for (int i = 1;i <= n;i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}