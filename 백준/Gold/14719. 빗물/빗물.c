#include<stdio.h>
int main() {
    int i, j, height, width, sum = 0;
    int left, right, tmp;
    int block[500] = { 0, };
    scanf("%d %d", &height, &width);

    for (i = 0; i < width; i++)scanf("%d", &block[i]);

    for (i = 0; i < width; i++) {
        left = block[i];
        right = block[i];
        for (j = i - 1; j >= 0; j--) {
            if (block[j] > left) left = block[j];
        }
            for (j = i + 1; j < width; j++) {
                if (block[j] > right) right = block[j];
            }
            tmp = left < right ? left : right;
            if (tmp - block[i] > 0)sum += tmp - block[i];
        }
        printf("%d", sum);
    }
