#include <stdio.h>
void swap(int x, int y);  // swap 함수의 프로토타입 선언

int main(void)
{
    int a = 100, b = 200;  // 두 정수 a와 b를 선언하고 초기화
    printf("a = %d b = %d\n", a, b);  // 초기 a와 b의 값을 출력

    swap(a, b);  // a와 b를 인수로 하여 swap 함수를 호출

    printf("a = %d b = %d\n", a, b);  // swap 후의 a와 b의 값을 출력 (변화 없음)
    return 0;  // 성공적인 종료를 나타내기 위해 0을 반환
}

void swap(int x, int y) {
    int tmp;  // 임시 정수 tmp를 선언
    printf("x = %d y = %d\n", x, y);  // x와 y의 값을 출력

    tmp = x;  // x와 y의 값을 교환
    x = y;
    y = tmp;

    printf("x = %d y = %d\n", x, y);  // 교환 후 x와 y의 값을 출력
}
