#include <stdio.h>

int main() {
    int input;
    int remains[42] = {0, }; // 크기 42의 배열을 0으로 초기화
    int count = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &input);
        remains[input % 42] = 1; // 나머지가 나온 인덱스를 1로 표시
    }

    for (int i = 0; i < 42; i++) {
        if (remains[i] == 1) {
            count++; // 값이 1인 인덱스의 개수 세기
        }
    }

    printf("%d\n", count); // 최종 개수 출력

    return 0;
}