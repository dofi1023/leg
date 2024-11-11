#include <stdio.h>
int main() {
    int n= 0;
    int i,j,k,l;
    scanf("%d", &n);
    for (i = 0;i < n;i++) {
        for (k = 0;k < i;k++) {
            printf(" ");
        }
        for (j = 0;j < (n - i) *2 -1;j++) {
            printf("*");
        }
        printf(" ");
        printf("\n");
    }
    return 0;
}