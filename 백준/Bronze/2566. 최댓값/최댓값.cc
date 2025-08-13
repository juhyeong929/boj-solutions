#include <stdio.h>

int main() {
    int grid[9][9];
    int max_value = -1;
    int row = 0;
    int col = 0;
    
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            scanf("%d", &grid[i][j]);
            
            if (grid[i][j] > max_value) {
                max_value = grid[i][j];
                row = i + 1;
                col = j + 1;
            }
        }
    }
    
    printf("%d\n", max_value);
    printf("%d %d\n", row, col);
    
    return 0;
}