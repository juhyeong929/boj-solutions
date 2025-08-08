#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int basket[N + 1];
    int i, j, k;
    int a;

    for (a = 1; a <= N; a++) {
        basket[a] = 0;
    }

    for (a = 0; a < M; a++) {
        scanf("%d %d %d", &i, &j, &k);
        for (int b = i; b <= j; b++) {
            basket[b] = k;
        }
    }

    for (a = 1; a <= N; a++) {
        printf("%d ", basket[a]);
    }
    printf("\n");

    return 0;
}