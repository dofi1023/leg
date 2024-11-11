#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int num = 0, cnt=0;
	scanf("%d", &num);
	char **arr;
	arr = (char**)calloc(num, sizeof(char*));
	for (int i = 0; i < num; i++) {
		arr[i] = (char*)calloc(num, sizeof(char));  // 각 행에 문자 배열 할당
	}

	
	for (int i = 0;i < num;i++) {
		for (int j = 0;j < num;j++) {
			scanf(" %c", &arr[i][j]);
		}
	}

	for (int i = 0;i < num;i++) {
		for (int j = 0;j < num;j++) {
			if (arr[i][j] == arr[j][i])
				cnt++;
		}
	}
	if (cnt == num * num)
		printf("YES\n");

	else
		printf("NO\n");

	free(arr);
	return 0;

}
