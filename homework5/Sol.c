#include <stdio.h>
#define SIZE 10  // 배열의 크기를 정의

int main(void)
{
    int list[SIZE] = {3, 2, 9, 7, 1, 4, 8, 0, 6, 5};  // 10개의 정수로 배열 초기화
    int i, j, temp, least;

    // 마지막 요소를 제외한 배열의 각 요소를 반복하는 외부 루프
    for(i = 0; i < SIZE - 1; i++) {
        least = i;  // 현재 위치를 가장 작은 요소로 가정

        // 정렬되지 않은 배열 부분에서 가장 작은 요소를 찾는 내부 루프
        for(j = i + 1; j < SIZE; j++) {
            if(list[j] < list[least]) {
                least = j;  // 가장 작은 요소의 위치를 업데이트
            }
        }

        // 찾은 가장 작은 요소를 현재 요소와 교환
        temp = list[i];
        list[i] = list[least];
        list[least] = temp;
    }

    // 선택 사항: 정렬된 배열을 확인하기 위해 출력
    for(i = 0; i < SIZE; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");

    return 0;  // 성공적인 실행을 나타내기 위해 0을 반환
}
