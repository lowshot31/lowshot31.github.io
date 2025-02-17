#define MAX_ELEMENTS 100
#include <stdio.h>

int scores[MAX_ELEMENTS];

int get_max_score(int n) {
    int i, largest;
    largest = scores[0];
    for (i = 1; i < n; i++) {
        if (scores[i] > largest) {
            largest = scores[i];
        }
    }
    return largest;
}

int main() {
    // 예제 점수 초기화
    for (int i = 0; i < 10; i++) {
        scores[i] = i * 10; // 0, 10, 20, ..., 90
    }

    int a = get_max_score(10);
    printf("최대 점수는 %d입니다.\n", a); // 수정된 부분
    return 0;
}
