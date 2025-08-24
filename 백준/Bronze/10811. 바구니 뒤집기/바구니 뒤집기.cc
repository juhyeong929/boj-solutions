#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int arr[101]; 

    for (int k = 0; k < N; k++) {
        arr[k] = k + 1;
    }


    for (int k = 0; k < M; k++) {
        int i, j;
        scanf("%d %d", &i, &j);

        int start = i - 1;
        int end = j - 1;

        while (start < end) {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }

    for (int k = 0; k < N; k++) {
        printf("%d ", arr[k]);
    }
    printf("\n");

    return 0;
}