#include <stdio.h>
#define SIZE 16  // 배열의 크기를 정의

// 이진 탐색 함수의 선언
int binary_search(int list[], int n, int key);

int main(void) {
    int key;
    int grade[SIZE] = {2, 6, 11, 13, 18, 20, 22, 27, 29, 30, 34, 38, 41, 42, 45, 47};  // 오름차순으로 정렬된 배열

    printf("탐색할 값을 입력하시오: ");
    scanf("%d", &key);  // 사용자로부터 탐색할 값을 입력받음

    printf("탐색 결과 = %d\n", binary_search(grade, SIZE, key));  // 이진 탐색 결과 출력

    return 0;  // 프로그램을 성공적으로 종료
}

// 이진 탐색 함수 정의
int binary_search(int list[], int n, int key) {
    int low, high, mid;
    low = 0;  // 탐색 범위의 시작 인덱스
    high = n - 1;  // 탐색 범위의 끝 인덱스

    // 탐색 범위가 존재하는 동안 반복
    while (low <= high) {
        mid = (low + high) / 2;  // 중간 인덱스 계산

        if (key == list[mid]) {  // 중간 요소가 탐색할 값과 같으면
            return mid;  // 인덱스 반환
        } else if (key < list[mid]) {  // 탐색할 값이 중간 요소보다 작으면
            high = mid - 1;  // 탐색 범위를 왼쪽 절반으로 줄임
        } else {  // 탐색할 값이 중간 요소보다 크면
            low = mid + 1;  // 탐색 범위를 오른쪽 절반으로 줄임
        }
    }

    return -1;  // 값을 찾지 못하면 -1 반환
}
