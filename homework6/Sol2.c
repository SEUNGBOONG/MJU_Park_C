#include <stdio.h>

int main(void)
{
    int i = 10;  // 정수 i를 선언하고 초기화
    int *p;  // 정수 포인터 p를 선언
    p = &i;  // p를 i의 주소로 설정
    printf("i = %d\n", i);  // i의 값을 출력

    *p = 20;  // p가 가리키는 주소의 값을 변경
    printf("i = %d\n", i);  // 변경된 i의 값을 출력
    return 0;  // 성공적인 종료를 나타내기 위해 0을 반환
}
