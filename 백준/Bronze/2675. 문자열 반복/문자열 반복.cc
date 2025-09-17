#include <stdio.h>
#include <string.h>

int main(void) {
    int T, R, i, j;
    char S[21];

    scanf("%d", &T);

    for (i = 0; i < T; i++) {
        scanf("%d %s", &R, S);
        int len = strlen(S);
        for (j = 0; j < len; j++) {
            for (int k = 0; k < R; k++) {
                printf("%c", S[j]);
            }
        }
        printf("\n");
    }

    return 0;
}