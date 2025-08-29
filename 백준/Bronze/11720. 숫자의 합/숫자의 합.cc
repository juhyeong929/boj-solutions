#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); 
    
    char num_str[101];
    scanf("%s", num_str); 
    
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += num_str[i] - '0'; 
    }
    
    printf("%d\n", sum); 
    
    return 0;
}