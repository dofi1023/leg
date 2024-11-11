#include <stdio.h>

int main() {
    int king, queen, rook, bishop, knight, pawn;

    
    scanf("%d %d %d %d %d %d", &king, &queen, &rook, &bishop, &knight, &pawn);

    
    printf("%d\n", 1 - king);      
    printf("%d\n", 1 - queen);     
    printf("%d\n", 2 - rook);      
    printf("%d\n", 2 - bishop);    
    printf("%d\n", 2 - knight);    
    printf("%d\n", 8 - pawn);      

    return 0;
}
