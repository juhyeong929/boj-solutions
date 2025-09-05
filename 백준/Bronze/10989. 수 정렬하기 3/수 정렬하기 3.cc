#include <stdio.h>

#define MAX_NUM 10001 // 문제에서 주어진 수의 최대값은 10,000이므로 배열 크기는 10,001

int count[MAX_NUM]; // 전역 변수 또는 정적 변수로 선언하여 데이터 영역에 할당

int main(void) {
    int N;
    scanf("%d", &N);
    
    int num;
    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        count[num]++; // 입력받은 수에 해당하는 인덱스의 값을 1 증가
    }
    
    // 카운팅 배열을 순회하며 정렬된 결과 출력
    for (int i = 1; i < MAX_NUM; i++) {
        if (count[i] > 0) { // 해당 숫자가 존재한다면
            for (int j = 0; j < count[i]; j++) {
                printf("%d\n", i); // 등장 횟수만큼 숫자를 출력
            }
        }
    }
    
    return 0;
}