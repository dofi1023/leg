#include <stdio.h>
int main() {

    int n = 0, k = 0;
    int t = 0, y = 0;
    scanf("%d %d %d %d", &n, &k, &t, &y);
    printf("%d", (n * k) + (t * y));

    return 0;
}