#include <stdio.h>

int main(void){
    int chess[6] = {1,1,2,2,2,8};
    int a[6];
    int b[6];

    for(int i = 0; i < 6; i ++){
        scanf("%d",&a[i]);
    }
    
    for(int i = 0; i < 6; i++){
        b[i] = chess[i] - a[i];
    }
    
    for(int i = 0; i < 6; i++){
        printf("%d ", b[i]);
    }
    return 0;
    
}