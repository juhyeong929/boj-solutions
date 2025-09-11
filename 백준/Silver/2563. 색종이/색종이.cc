#include <stdio.h>

int main (void){
    int count = 0 ;
    int x,y;
    int area = 0;

    scanf("%d",&count);

    int paper[101][101] ={0};

    for(int i = 0 ; i < count; i++){
        scanf("%d %d", &x,&y);
        for(int j = x; j < x+10 ; j++){
            for(int k = y; k < y+10; k++){
                if(paper[j][k] == 0){
                    paper[j][k] = 1;
                    area++;
                }
            }
        }
    }
    
    printf("%d\n", area);
    return 0;

    
}