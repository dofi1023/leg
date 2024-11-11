#include<stdio.h>

int main() {
	char monjang[21];
	int num = 0;
	scanf("%d", &num);
	for(int i=0;i< num;i++){
		scanf("%s", monjang);
		for (int j = 0;monjang[j] != '\0';j++) {
			if (monjang[j]>='A'&&monjang[j]<='Z') {
				monjang[j] = monjang[j] - 'A' + 'a';
			}
		}
		printf("%s\n", monjang);
		
	}
	return 0;
}