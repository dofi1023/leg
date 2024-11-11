#include<stdio.h>
int main() {
	int n[8] = { 0 };
	int min = 0;
	scanf("%d", &n[0]);
	scanf("%d", &n[1]);
	scanf("%d", &n[2]);
	scanf("%d", &n[3]);
	scanf("%d", &n[4]);
	scanf("%d", &n[5]);
	scanf("%d", &n[6]);
	//홀수들의 배열을 따로 만들기
	int holsum=0;
	int hol[8] = {100,100,100,100,100,100,100,100};
	for (int i = 0;i < 7;i++) {
		if (n[i] % 2 != 0) {
			hol[i] = n[i];
			holsum = holsum + n[i];
		}
	}
	// 최소값을 찾아라
	min = hol[1];
	for (int j = 0;j < 7;j++) {
		if (hol[j] == 0)
			continue;
			
		if (min > hol[j]&&hol[j]!=0)
			min = hol[j];
		
	}
	// 홀수가 없는 경우
	for (int j = 0;j < 7;j++) {
		if (holsum == 0) {
			printf("-1");
			return 0;
		}
	}
	// 홀수가 있는 경우
		printf("%d\n", holsum);
		printf("%d", min);
	
	return 0;
}