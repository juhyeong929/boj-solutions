#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int calls[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &calls[i]);
    }

    int youngsik_cost = 0;
    int minsik_cost = 0;

    for (int i = 0; i < N; i++) {
        youngsik_cost += ((calls[i] / 30) + 1) * 10;
        minsik_cost += ((calls[i] / 60) + 1) * 15;
    }

    if (youngsik_cost < minsik_cost) {
        printf("Y %d\n", youngsik_cost);
    } else if (minsik_cost < youngsik_cost) {
        printf("M %d\n", minsik_cost);
    } else {
        printf("Y M %d\n", youngsik_cost);
    }

    return 0;
}