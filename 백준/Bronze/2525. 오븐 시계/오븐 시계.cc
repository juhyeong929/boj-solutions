#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d", &A, &B); 
    scanf("%d", &C);        

    int total_minutes = A * 60 + B + C;

    int hour = (total_minutes / 60) % 24;
    int minute = total_minutes % 60;

    printf("%d %d\n", hour, minute);
    return 0;
}
