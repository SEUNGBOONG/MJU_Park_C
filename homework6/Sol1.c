#include <stdio.h>

int main(void)
{
    int x= 10, y=20;  // 두 정수 x와 y를 선언하고 초기화
    int *p;  // 정수 포인터 p를 선언

    p = &x;  // p를 x의 주소로 설정
    printf("p = %d\n", p);  // p에 저장된 주소를 출력
    printf("p = %d\n\n", *p);  // p가 가리키는 값을 출력

    p = &y;  // p를 y의 주소로 설정
    printf("p = %d\n", p);  // p에 저장된 주소를 출력
    printf("*p = %d\n", *p);  // p가 가리키는 값을 출력
    return 0;  // 성공적인 종료를 나타내기 위해 0을 반환
}
