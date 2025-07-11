#include <stdio.h>

int main() {
    int N;
    
    scanf("%d", &N);


    for (int i = N; i >= 1; i--) {


        for (int k = 1; k <= i; k++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}