#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char N[8];
    scanf("%s", N);

    int count[10] = {0};

    for (int i = 0; i < strlen(N); i++) {
        count[N[i] - '0']++;
    }

    count[6] = (int)round((double)(count[6] + count[9]) / 2.0);
    count[9] = 0;

    int max_sets = 0;

    for (int i = 0; i < 9; i++) {
        if (count[i] > max_sets) {
            max_sets = count[i];
        }
    }
    
    if (count[6] > max_sets) {
        max_sets = count[6];
    }

    printf("%d\n", max_sets);

    return 0;
}