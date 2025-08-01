#include <stdio.h>

#define MAX_N 101
#define MAX_K 100001

int dp[MAX_K];
int w[MAX_N], v[MAX_N];

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    for (int i = 1; i <= N; i++) {
        scanf("%d %d", &w[i], &v[i]);
    }

    for (int i = 1; i <= N; i++) {

        for (int j = K; j >= w[i]; j--) {
            dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
        }
    }

    printf("%d\n", dp[K]);
    return 0;
}