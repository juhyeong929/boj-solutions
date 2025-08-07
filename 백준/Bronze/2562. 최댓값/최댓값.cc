#include <stdio.h>

int main(void) {
    int max_value = 0;
    int max_index = 0;
    int current_value;

    for (int i = 1; i <= 9; i++) {
        scanf("%d", &current_value);

        if (current_value > max_value) {
            max_value = current_value;
            max_index = i;
        }
    }

    printf("%d\n", max_value);
    printf("%d\n", max_index);

    return 0;
}