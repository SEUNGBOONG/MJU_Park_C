#include <stdio.h>

int main(void)
{
    int a[] = {10, 20, 30, 40, 50};  // 정수 배열 a를 선언하고 초기화

    printf("&a[0] = %u\n", &a[0]);  // a[0]의 주소를 출력
    printf("&a[1] = %u\n", &a[1]);  // a[1]의 주소를 출력
    printf("&a[2] = %u\n", &a[2]);  // a[2]의 주소를 출력
    printf("a = %u\n", a);  // 배열 a의 주소를 출력
    return 0;  // 성공적인 종료를 나타내기 위해 0을 반환
}
