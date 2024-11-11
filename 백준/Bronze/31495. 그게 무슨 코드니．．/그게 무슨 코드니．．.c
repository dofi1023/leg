// Baekjoon_31495_그게 무슨 코드니..

#include <string.h>
#include <stdio.h>

int main(void) {
    char ss[55];
    scanf("%[^\n]s", ss);

    int num = 0;
    int l = strlen(ss);
    if ((ss[0] == '"') && ss[l - 1] == '"') {
        if ((ss[0] == '"') && ss[1] == '"') {
            printf("CE");
            return 0;
        }

        for (int i = 1; i < l - 1; i++) {
            if (ss[i] == ' ') {
                num = num + 1;
                continue;
            }

            else {
                for (int j = 1; j < l - 1; j++) {
                    printf("%c", ss[j]);
                }
                return 0;
            }
        }

        if (num == l - 2) {
            printf("CE");
        }
    }

    else {
        printf("CE");
    }
    if(ss[0]=='"'&&ss[1]=='\0')
        printf("CE");

    return 0;
}