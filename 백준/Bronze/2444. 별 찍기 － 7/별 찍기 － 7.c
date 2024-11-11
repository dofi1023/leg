#include <stdio.h>
int main() {
    int n = 0;
    int i, j, k;
    scanf("%d", &n);
    for (i = 0;i < n;i++) {
        for (k = 0;k < n - i - 1;k++) {
            printf(" ");
        }
        for (j = 0;j < (i * 2) + 1;j++) {
            printf("*");
        }
        printf(" ");
        printf("\n");

    }
    int n2 = n - 1;
    for (i = 0;i < n2;i++) {
        for (j = 0;j < i + 1;j++) {
            printf(" ");
        }
        for (k = 0;k < (n2-i) * 2 - 1;k++) {
            printf("*");
        }
        printf(" ");
        printf("\n");
    }
    return 0;
}
