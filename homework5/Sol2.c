#include <stdio.h>
#define SIZE 10  // 배열의 크기를 정의

int main(void)
{
    int key, i;
    int list[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9};  // 9개의 정수로 배열 초기화

    printf("탐색할 값을 입력하시오: ");
    scanf("%d", &key);  // 사용자로부터 탐색할 값을 입력받았다. 

    // 배열에서 입력된 값을 탐색하는 반복문
    for(i = 0; i < SIZE; i++) {
        if(list[i] == key) {  // 입력된 값이 배열의 요소와 일치하는지 확인
            printf("탐색 성공 인덱스= %d\n", i);  // 탐색 성공 시 인덱스를 출력
            break;  // 값을 찾으면 반복문을 종료
        }
    }

    if (i == SIZE) {  // 만약 값을 찾지 못한 경우
        printf("탐색 실패\n");
    }

    printf("탐색 종료\n");  // 탐색 종료 메시지 출력
    return 0;  // 프로그램을 성공적으로 종료
}
