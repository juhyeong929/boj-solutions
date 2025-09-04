#include <stdio.h>
#include <string.h>

int main() {
    char words[5][16];
    int max_len = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%s", words[i]);

        if (strlen(words[i]) > max_len) {
            max_len = strlen(words[i]);
        }
    }

    for (int j = 0; j < max_len; j++) {
        for (int i = 0; i < 5; i++) {
            if (j < strlen(words[i])) {
                printf("%c", words[i][j]);
            }
        }
    }
    printf("\n");

    return 0;
}