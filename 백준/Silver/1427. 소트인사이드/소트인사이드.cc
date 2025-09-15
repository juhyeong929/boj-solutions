#include <stdio.h>
#include <string.h>


int main (void){
    char N[11];
    scanf("%s", N);

    int len = strlen(N);
    char temp;

    for(int i = 0; i<len ; i++){
        for(int j = i+1; j < len; j++){
            if(N[i] < N[j]){
                temp = N[i];
                N[i] = N[j];
                N[j] = temp;
            }
        }
    }
    printf("%s\n",N);
    
    return 0;
}