#include <stdio.h>

int main(void) {
    int count = 0;
    char word[1000001];

    while (scanf("%s", word) == 1) {
        count++;
    }

    printf("%d\n", count);

    return 0;
}