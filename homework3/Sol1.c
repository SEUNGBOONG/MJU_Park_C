#include <stdio.h>

int A; //정수 값 A 선언
int B; //정수 B 선언 
int add(); //밑에 A+B를 해주는 메서드를 구현 후 호출 한다 . (전역변수)

int main(void)
{
    int answer; //정수 answer 선언
    A=5; //A에 5할당 
    B=7; //B에 7할당 
    answer=add(); //answer에 A+B 가 구현되어있는 메서드를 넣는다. 
    printf("%d + %d = %d\n",A,B,answer); //결과값 출력
    return 0;
}
int add()
{
    return A+B; //add 메서드 구현 add메서드에 리턴 값 A+B 선언 

}