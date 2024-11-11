#include<stdio.h>
int main() {
	int basket[101] = { 0 };
	int n = 0, m = 0, i = 0, j = 0;
	int temp = 0;
	scanf("%d %d", &n, &m);
	for (int a = 1; a <= n;a++) {
		basket[a] = a;
	}
	for (int b = 0;b < m;b++) {
		scanf("%d %d", &i, &j);
			if (j - i == 1) {
				temp = basket[i];
				basket[i] = basket[j];
				basket[j] = temp;
			}
			else if(j-i>1){
				for (int d = 0;d < (j-i+1) / 2;d++) {
					temp = basket[i+d];
					basket[i+d] = basket[j-d];
					basket[j-d] = temp;
				}
			}
		}
	for (int c = 1; c <= n;c++)
		printf("%d ", basket[c]);
	return 0;
}
