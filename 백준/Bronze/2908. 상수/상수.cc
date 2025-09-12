#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverse(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

int main(void) {
    char A[4], B[4]; 

    scanf("%s %s", A, B);

    reverse(A);
    reverse(B);

    if (atoi(A) > atoi(B)) {
        printf("%s\n", A);
    } else {
        printf("%s\n", B);
    }

    return 0;
}