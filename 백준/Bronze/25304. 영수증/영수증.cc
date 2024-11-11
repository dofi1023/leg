#include <stdio.h>
int main()
{
    int sum, n, a, b, ab = 0;
    scanf("%d", &sum);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        ab += a * b;
    }   
    
    if (ab == sum)
        printf("Yes");
    else
        printf("No");

    return 0;
}
   