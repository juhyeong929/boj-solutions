#include <stdio.h>

int main() {
    int x; 
    int n;
    long long calculated_sum = 0;
    
    scanf("%d", &x);
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        int a, b; 
        scanf("%d %d", &a, &b);
        calculated_sum += (long long)a * b;
    }
    
    if (calculated_sum == x) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    
    return 0;
}