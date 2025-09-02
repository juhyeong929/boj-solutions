#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ALPHABET_COUNT 26

// 두 단어의 문자 빈도를 저장하는 배열
int count1[ALPHABET_COUNT] = {0};
int count2[ALPHABET_COUNT] = {0};

int main() {
    char word1[1001], word2[1001];
    
    scanf("%s", word1);
    
    scanf("%s", word2);

    for (int i = 0; word1[i] != '\0'; i++) {
        count1[word1[i] - 'a']++;
    }

    for (int i = 0; word2[i] != '\0'; i++) {
        count2[word2[i] - 'a']++;
    }

    int removed_chars = 0;

    for (int i = 0; i < ALPHABET_COUNT; i++) {

        int min_count = (count1[i] < count2[i]) ? count1[i] : count2[i];

        removed_chars += (count1[i] - min_count);
        removed_chars += (count2[i] - min_count);
    }

    // 결과 출력
    printf("%d\n", removed_chars);

    return 0;
}
