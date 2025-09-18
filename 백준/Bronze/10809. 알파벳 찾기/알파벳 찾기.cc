#include <stdio.h>
#include <string.h>

int main() {
    char S[101];
    int alphabet_pos[26];
    
    // 알파벳 위치 배열을 -1로 초기화
    for (int i = 0; i < 26; i++) {
        alphabet_pos[i] = -1;
    }
    
    // 단어 입력받기
    scanf("%s", S);
    
    // 단어 순회하며 각 알파벳의 첫 등장 위치 기록
    for (int i = 0; i < strlen(S); i++) {
        int index = S[i] - 'a'; // 'a'를 기준으로 몇 번째 알파벳인지 계산
        
        // 해당 알파벳이 처음 등장하는 경우에만 위치 기록
        if (alphabet_pos[index] == -1) {
            alphabet_pos[index] = i;
        }
    }
    
    // 결과 출력
    for (int i = 0; i < 26; i++) {
        printf("%d ", alphabet_pos[i]);
    }
    printf("\n");
    
    return 0;
}