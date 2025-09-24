#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b) {
    char *str1 = *(char **)a;
    char *str2 = *(char **)b;

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) {
        return len1 - len2;
    }

    return strcmp(str1, str2);
}

int main() {
    int N;
    scanf("%d", &N);

    char **words = (char **)malloc(sizeof(char *) * N);
    for (int i = 0; i < N; i++) {
        words[i] = (char *)malloc(sizeof(char) * 51);
        scanf("%s", words[i]);
    }

    qsort(words, N, sizeof(char *), compare);

    printf("%s\n", words[0]);
    for (int i = 1; i < N; i++) {
        if (strcmp(words[i], words[i - 1]) != 0) {
            printf("%s\n", words[i]);
        }
    }

    for (int i = 0; i < N; i++) {
        free(words[i]);
    }
    free(words);

    return 0;
}