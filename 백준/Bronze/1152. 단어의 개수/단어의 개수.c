#include<stdio.h>
#include<string.h>
int main() {
	char arr[1000001];
	int cnt = 0, len = 0;
	scanf("%[^\n]s", arr);
	len = strlen(arr);


	for (int i = 0; i<len;i++) {
		if (arr[i] == ' ')
			cnt++;
	}
	//2번 dksl dh gksrmfdl dkseho
	if (arr[0] == ' ' && arr[len - 1] == ' ')
		printf("%d", cnt - 1);
	//3번
	else if (arr[0] == ' ' || arr[len - 1] == ' ')
		printf("%d", cnt);
	//1번
	else 
		printf("%d", cnt+1);
	return 0;
}