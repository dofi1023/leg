#include <stdio.h>
int main() {
    int n= 0;
    int i,j,k,l;
    scanf("%d", &n);
    for (i = 0;i < n;i++) {
        for (j = 0;j < n - i - 1;j++) {
            printf(" ");
        }
        for (k = 0;k < i * 2 + 1;k++) {
            printf("*");
        }
        printf(" ");
        printf("\n");
    }
    return 0;
}