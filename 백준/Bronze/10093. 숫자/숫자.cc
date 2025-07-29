#include <stdio.h>

int main() {
    long long A, B;
    scanf("%lld %lld", &A, &B);

    long long min_val, max_val;
    if (A < B) {
        min_val = A;
        max_val = B;
    } else {
        min_val = B;
        max_val = A;
    }


    if (min_val == max_val) {
        printf("0\n\n"); 
    } else {
        long long count = max_val - min_val - 1;
        printf("%lld\n", count);

        for (long long i = min_val + 1; i < max_val; i++) {
            printf("%lld ", i);
        }
        printf("\n");
    }

    return 0;
}