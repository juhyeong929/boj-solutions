#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int height[9];
    int sum = 0;
    int i, j;
    int liar1 = -1, liar2 = -1; 

    for (i = 0; i < 9; i++) {
        scanf("%d", &height[i]);
        sum += height[i];
    }


    int target_sum = sum - 100;

    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 9; j++) {
            if (height[i] + height[j] == target_sum) {
                liar1 = i;
                liar2 = j;
                break;
            }
        }
        if (liar1 != -1) {
            break;
        }
    }


    int real_dwarfs[7];
    int k = 0;
    for (i = 0; i < 9; i++) {
        if (i != liar1 && i != liar2) {
            real_dwarfs[k++] = height[i];
        }
    }

    qsort(real_dwarfs, 7, sizeof(int), compare);

    for (i = 0; i < 7; i++) {
        printf("%d\n", real_dwarfs[i]);
    }

    return 0;
}