#include <stdio.h>
#include <limits.h>

int main() {
    int num;
    int sum_of_odds = 0;
    int min_odd = INT_MAX;
    int odd_count = 0;

    for (int i = 0; i < 7; i++) {
        scanf("%d", &num);

        if (num % 2 != 0) {
            sum_of_odds += num;
            odd_count++;

            if (num < min_odd) {
                min_odd = num;
            }
        }
    }

    if (odd_count == 0) {
        printf("-1\n");
    } else {
        printf("%d\n", sum_of_odds);
        printf("%d\n", min_odd);
    }

    return 0;
}