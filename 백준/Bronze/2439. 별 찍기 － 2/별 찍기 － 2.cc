#include <stdio.h>
int main()
{
    int c;
    scanf("%d", &c);

    for (int i = 1; i <= c; i++) {
        for (int j = c; j > i; j--) {
            printf(" ");
    
        }
        for (int n = 0; n < i; n++) {
            printf("*");
            
        }
        if (i<c)
            printf("\n");
    
    }
    return 0;

}