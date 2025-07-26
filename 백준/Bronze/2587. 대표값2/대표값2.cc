#include <stdio.h>

int main() {
    int A[5];
    int total = 0;
    int ave;
    int mid;
    int temp;

    for(int i=0; i< 5; i++){
        scanf("%d",&A[i]);
    }

    for(int i=0; i < 5; i++){
        total= total + A[i];
    }
    ave = total/5;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j< 4 - i; j++){
            if(A[j]> A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1]= temp;
            }
        }
    }
    mid = A[2];

    printf("%d\n",ave);
    printf("%d",mid);

    return 0;
}