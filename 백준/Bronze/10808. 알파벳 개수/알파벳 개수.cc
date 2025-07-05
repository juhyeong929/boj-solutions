#include <stdio.h>
#include <string.h>

int main() {
    char S[101];
    int alphabet_counts[26] = {0};

    scanf("%s", S);

    for (int i = 0; i < strlen(S); i++) {
        int index = S[i] - 'a';
        alphabet_counts[index]++;
    }

    for (int i = 0; i < 26; i++) {
        printf("%d ", alphabet_counts[i]);
    }
    printf("\n");

    return 0;
}