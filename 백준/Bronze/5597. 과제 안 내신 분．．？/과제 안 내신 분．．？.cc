#include <stdio.h>

int main(void) {
    int students[31] = {0,};
    int i, n;

    for (i = 0; i < 28; i++) {
        scanf("%d", &n);
        students[n] = 1;
    }


    for (i = 1; i <= 30; i++) {
        if (students[i] == 0) { 
            printf("%d\n", i);
        }
    }

    return 0;
}