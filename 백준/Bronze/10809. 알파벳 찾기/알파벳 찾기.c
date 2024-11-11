#include<stdio.h>
#include<string.h>

int main() {
	char arr[100];
	int abc[26] = {0};
	int index = 0;
	scanf("%s", arr);

	for (int i = 0;i < 26;i++) {
		abc[i] = -1;
	}

	for (int i = 0;i < strlen(arr);i++) {
		index = arr[i] - 'a';
		if (abc[index] == -1)
			abc[index] = i;
		else
			continue;
	}
	for(int a =0;a<26;a++)
		printf("%d ", abc[a]);
	return 0;
}