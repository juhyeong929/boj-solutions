#include <stdio.h>

int main() {
    int N; 
    scanf("%d", &N);

    double scores[N]; 
    double sum = 0.0;
    double max_score = 0.0;


    for (int i = 0; i < N; i++) {
        scanf("%lf", &scores[i]);
        if (scores[i] > max_score) {
            max_score = scores[i];
        }
        sum += scores[i];
    }

    double new_average = (sum / max_score) * 100 / N;

    printf("%.10f\n", new_average);

    return 0;
}