#include <stdio.h>


void convertToBase(int n, int b) {
    if (n == 0) {
        return;
    }

    convertToBase(n / b, b);
    
    int remainder = n % b;
    
    if (remainder < 10) {
        printf("%d", remainder);
    } 

    else {
        printf("%c", 'A' + (remainder - 10));
    }
}

int main() {
    int n, b;
    
    scanf("%d %d", &n, &b);
    
    if (n == 0) {
        printf("0\n");
        return 0;
    }
    

    convertToBase(n, b);
    
    printf("\n");
    
    return 0;
}