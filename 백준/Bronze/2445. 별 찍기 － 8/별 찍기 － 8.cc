#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        for (int k = 0; k < i; k++) {
            printf("*");
        }
        for (int k = 0; k < 2 * (N - i); k++) {
            printf(" ");
        }
        for (int k = 0; k < i; k++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = N - 1; i >= 1; i--) {
        for (int k = 0; k < i; k++) {
            printf("*");
        }
        for (int k = 0; k < 2 * (N - i); k++) {
            printf(" ");
        }
        for (int k = 0; k < i; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}