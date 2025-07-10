#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

int main() {
    int A, B, C;
    long long product; 
    int counts[10] = {0}; 
    char product_str[20]; 


    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);


    product = (long long)A * B * C;


    sprintf(product_str, "%lld", product);


    for (int i = 0; i < strlen(product_str); i++) {

        counts[product_str[i] - '0']++;
    }


    for (int i = 0; i < 10; i++) {
        printf("%d\n", counts[i]);
    }

    return 0; 
}