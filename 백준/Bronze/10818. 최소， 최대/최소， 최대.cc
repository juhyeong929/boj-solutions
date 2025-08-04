#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int num;
    int min, max;

    scanf("%d", &num);
    min = max = num;

    for (int i = 1; i < N; i++) {
        scanf("%d", &num);

        if (num < min) {
            min = num;
        }
        if (num > max) {
            max = num;
        }
    }

    printf("%d %d\n", min, max);

    return 0;
}
