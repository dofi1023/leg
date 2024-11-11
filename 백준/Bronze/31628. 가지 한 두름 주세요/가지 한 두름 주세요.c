#include<stdio.h>
#include<string.h>
int main() {
	char gaji[10][10][9];
	int i, j;
	
	for (i = 0;i < 10;i++) {
		for (j = 0;j < 10;j++) {
			scanf("%s", &gaji[i][j]);
		}
	}

	int counthang = 0;
	int countyeol = 0;
	for (i = 0;i < 10;i++){
		counthang = 0;
		countyeol = 0;
		for (j = 0;j < 9;j++) {
			if (strcmp(gaji[i][j], gaji[i][j + 1])==0)
			{
				counthang++;
				if (counthang == 9) {
		
					printf("1");
					return 0;
				}
			}
			if (strcmp(gaji[j][i], gaji[j + 1][i])==0) 
			{
				countyeol++;
				if (countyeol == 9) {
					printf("1");
					return 0;
				}
			}
		}
	}

	if (counthang < 9 && countyeol < 9)
		printf("0");
	return 0;
}