#include<stdio.h>
int main() {
	char monjang[256];
	int num = 0;
	scanf("%d", &num);
	getchar();
	for(int i=1;i<= num;i++){
		gets(monjang);
		printf("%d. ", i);
		printf("%s\n", monjang);
	}
	return 0;
}



