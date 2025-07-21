#include <stdio.h>

int main() {
    int yut[4]; 
    int sum; 

    for (int i = 0; i < 3; i++) {
        sum = 0; 

        for (int j = 0; j < 4; j++) {
            scanf("%d", &yut[j]); 
            if (yut[j] == 0) {
                sum++; 
            }
        }


        if (sum == 1) {
            printf("A\n");
        } else if (sum == 2) { 
            printf("B\n");
        } else if (sum == 3) { 
            printf("C\n");
        } else if (sum == 4) { 
            printf("D\n");
        } else { 
            printf("E\n");
        }
    }

    return 0; 
}