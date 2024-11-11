#include<stdio.h>
int paper[128][128] = { 0 };
int white = 0, blue = 0;
int i = 0, j = 0;
void make_paper(int x, int y, int w) {
	int cntw = 0;
	int cntb = 0;

	for (int i = x; i < x + w;i++)
	{
		for (int j = y;j < y + w;j++)
		{
			if (paper[i][j] == 1)cntb++;
			else cntw++;
		}
	}
	
	if (cntb == w * w)
		blue++;
	else if (cntw == w * w)
		white++;
	else
	{
		
				make_paper(x, y, w / 2);
				make_paper(x + w / 2, y, w / 2);
				make_paper(x, y + w / 2, w / 2);
				make_paper(x + w / 2, y + w / 2, w / 2);
		

	}
}
int main() {
	int x = 0, y = 0, w = 0;
	int num = 0;
	
	scanf("%d", &num);
	w = num;
	for (i = 0;i < num;i++) {
		for (j = 0;j < num;j++) {
			scanf("%d", &paper[i][j]);
		}
	}
	make_paper(x, y, w);
	printf("%d\n", white);
	printf("%d\n", blue);

	return 0;
}