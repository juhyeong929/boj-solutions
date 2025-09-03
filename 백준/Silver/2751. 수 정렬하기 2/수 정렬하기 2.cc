#include <stdio.h>
#include <stdlib.h>

int compare_integers(const void *a, const void *b) {
    int int_a = *(int *)a;
    int int_b = *(int *)b;
    
    if (int_a < int_b) {
        return -1;
    } else if (int_a > int_b) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int N;
    scanf("%d", &N);

    int *numbers = (int *)malloc(N * sizeof(int));
    if (numbers == NULL) {
        return 1; 
    }

    for (int i = 0; i < N; i++) {
        scanf("%d", &numbers[i]);
    }


    qsort(numbers, N, sizeof(int), compare_integers);

    for (int i = 0; i < N; i++) {
        printf("%d\n", numbers[i]);
    }

    free(numbers); 
    
    return 0;
}