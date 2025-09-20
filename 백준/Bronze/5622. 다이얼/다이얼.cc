#include <stdio.h>
#include <string.h>

int main(void) {
    char word[16];
    int total_time = 0;

    // 사용자로부터 단어 입력 받기
    scanf("%s", word);

    // 문자열의 각 문자를 순회
    for (int i = 0; i < strlen(word); i++) {
        char ch = word[i];

        // 각 문자에 해당하는 다이얼 번호의 시간을 더함
        if (ch >= 'A' && ch <= 'C') {
            total_time += 3;
        } else if (ch >= 'D' && ch <= 'F') {
            total_time += 4;
        } else if (ch >= 'G' && ch <= 'I') {
            total_time += 5;
        } else if (ch >= 'J' && ch <= 'L') {
            total_time += 6;
        } else if (ch >= 'M' && ch <= 'O') {
            total_time += 7;
        } else if (ch >= 'P' && ch <= 'S') {
            total_time += 8;
        } else if (ch >= 'T' && ch <= 'V') {
            total_time += 9;
        } else if (ch >= 'W' && ch <= 'Z') {
            total_time += 10;
        }
    }

    // 최종 결과 출력
    printf("%d\n", total_time);

    return 0;
}