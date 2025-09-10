#include <stdio.h>
#include <string.h>

#define MAX_SIZE 1000001

int main(void) {
    char str[MAX_SIZE];
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("0\n");
        return 0;
    }
    str[strcspn(str, "\n")] = 0;

    int count = 0;
    int is_word = 0; 

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            is_word = 0;
        } else {
            // 공백이 아닌 문자가 나타났을 때
            if (is_word == 0) {
                is_word = 1;
                count++;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}