#include<stdio.h>
int main(){
	int num = 0;
	int sum = 0;
	char str[100]= { 0 };
	scanf("%d", &num);
	scanf("%s", str);

	for (int i = 0;i < num;i++) {
		
		sum = sum + str[i]-'0';
	}
	
	printf("%d", sum);
	return 0;
}