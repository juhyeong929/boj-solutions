#include <stdio.h>

int main() {
    int cards[20];
    for (int i = 0; i < 20; i++) {
        cards[i] = i + 1;
    }

    for (int k = 0; k < 10; k++) {
        int a, b;
        scanf("%d %d", &a, &b);

        int start_idx = a - 1;
        int end_idx = b - 1;

        while (start_idx < end_idx) {
            int temp = cards[start_idx];
            cards[start_idx] = cards[end_idx];
            cards[end_idx] = temp;

            start_idx++;
            end_idx--;
        }
    }

    for (int i = 0; i < 20; i++) {
        printf("%d", cards[i]);
        if (i < 19) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}