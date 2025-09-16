#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char word[1000001];
    int count[26] = {0};
    int max_count = 0;
    int max_index = -1;
    int duplicate_count = 0;

    scanf("%s", word);
    int len = strlen(word); // ★ strlen()을 한 번만 계산하여 저장

    // O(N) : 문자열을 한 번만 순회하며 빈도수 계산
    for (int i = 0; i < len; i++) {
        char c = toupper(word[i]);
        count[c - 'A']++;
    }

    // O(1) : 26개의 알파벳 배열 순회 (상수 시간)
    for (int i = 0; i < 26; i++) {
        if (count[i] > max_count) {
            max_count = count[i];
            max_index = i;
        }
    }

    // O(1) : 26개의 알파벳 배열 순회 (상수 시간)
    for (int i = 0; i < 26; i++) {
        if (count[i] == max_count) {
            duplicate_count++;
        }
    }

    if (duplicate_count > 1) {
        printf("?\n");
    } else {
        printf("%c\n", (char)('A' + max_index));
    }

    return 0;
}