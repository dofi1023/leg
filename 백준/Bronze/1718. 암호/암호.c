#include<stdio.h>
#include<string.h>
int main(void) {
	char abc[26]; 
	char n[30001]; //평문
	char p[30001]; // 암호문
	int num[30001] = { 0 }; //순서
	char dab[30001]; //바뀐 암호문
	int i, j;
	int null = 0;
	for (i = 0;i < 26;i++) { //알파벳을 넣고
		abc[i] = 'a' + i;
	}
	scanf("%[^\n]s", n); //평문을 받고
	scanf("%s", p); //암호문을 받고
	
	null = strlen(p);
	for (i = null;i < strlen(n);i++) { //나머지 암호문 배열도 채워준다
		p[i] = p[i % null];
	}
	p[strlen(n)] = '\0';
	
	for (i = 0;p[i] != '\0';i++) { // 암호문의 끝까지 알바벳과 비교
		for (j = 0;j < 26;j++) {
			if (p[i] == abc[j])
				num[i] = j; // 순서를 찾아서
		}
	}
	for (i = 0;i<strlen(n);i++) { //바꾼다!
		dab[i] = (n[i] - num[i]) - 1;
		if (n[i]-num[i] <= 97) {
			dab[i] = 'z' - (num[i] - (n[i] - 97));
		}
		if (n[i] == ' ') { // 공백은 넘긴다
			dab[i] = ' ';
			continue;
		}
	}
	dab[i] = '\0';
	printf("%s", dab);
	
	return 0;
}