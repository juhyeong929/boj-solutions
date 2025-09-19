#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);
    int group_word_count = 0;
    
    for (int i = 0; i < N; i++) {
        char word[101];
        scanf("%s", word);
        
        int len = strlen(word);
        int is_group_word = 1;
        int alphabet[26] = {0,};
        
        for (int j = 0; j < len; j++) {
            if (alphabet[word[j] - 'a'] == 0) {
                // 처음 등장하는 문자
                alphabet[word[j] - 'a'] = 1;
            } else {
                // 이미 등장한 문자
                if (word[j] != word[j-1]) {
                    // 이전 문자와 다르면 그룹 단어가 아님
                    is_group_word = 0;
                    break;
                }
            }
        }
        
        if (is_group_word) {
            group_word_count++;
        }
    }
    
    printf("%d\n", group_word_count);
    
    return 0;
}