#include <stdio.h>

int main() {
    int n = 0;
    char mon[31];

    scanf("%d", &n);
    getchar(); // 입력 버퍼에서 개행 문자 제거

    for (int i = 0; i < n; i++) {
        scanf("%[^\n]", mon);
        if ('a' <= mon[0] && mon[0] <= 'z') {
            mon[0] = mon[0] - 'a' + 'A'; // 첫 글자를 대문자로 변환
        }
        printf("%s\n", mon); // 개행 추가
        getchar(); // 다음 줄로 이동
    }

    return 0;
}
