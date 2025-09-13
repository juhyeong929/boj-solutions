#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char N[100];
    int B;
    long long decimal = 0;
    int len, i;

    scanf("%s %d", N, &B);
    
    len = strlen(N);

    for (i = 0; i < len; i++) {
        int value;
        if (N[i] >= '0' && N[i] <= '9') {
            value = N[i] - '0';
        } else {
            value = N[i] - 'A' + 10;
        }
        decimal += value * pow(B, len - 1 - i);
    }
    
    printf("%lld\n", decimal);

    return 0;
}