#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n, x;
    scanf("%d", &n);

    int *a = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &x);

    qsort(a, n, sizeof(int), compare);

    int count = 0;
    int start = 0;
    int end = n - 1;

    while (start < end) {
        long long sum = (long long)a[start] + a[end];

        if (sum == x) {
            count++;
            start++;
            end--;
        } else if (sum > x) {
            end--;
        } else {
            start++;
        }
    }

    printf("%d\n", count);

    free(a);
    return 0;
}