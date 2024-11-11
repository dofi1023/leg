#include<stdio.h>

int main() {
	char monjang[1001];
	int left = 0, right=0;
	int index = 0;
	scanf("%s", monjang);
	for(int i=0;monjang[i]!='0';i++) {
		if (monjang[i] == '@')
			left++;
		if (monjang[i] == '(')
			index = i;
	}

	for (int j = index; monjang[j] != '\0';j++) {
		if (monjang[j] == '@')
			right++;
	}
	printf("%d %d", left, right);
	
	return 0;
}