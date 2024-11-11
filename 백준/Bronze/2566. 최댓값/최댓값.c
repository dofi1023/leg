#include <stdio.h>
int main() {
    int a[10][10] = { 0 };
    int i, j,max, x,y;

    for (i = 0;i < 9;i++) {
        for (j = 0;j < 9;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    max = a[0][0];
    for (i = 0;i < 9;i++) {
        for (j = 0;j < 9;j++) {
            if (max <= a[i][j]) {
                max = a[i][j];
                x = i;
                y = j;
            }
        }
    }
    printf("%d\n", max);
    printf("%d %d", x + 1, y + 1);
    return 0;
}
