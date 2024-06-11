#include <stdio.h>

void save(int money); // save 함수의 전역변수선언 

int main(void)
{
    printf("=======================\n");
    printf("입금 \t 출금 \t 잔고 \n");
    printf("=======================\n");
    //전부 출력을 위한 출력물들 
    // 여러 번의 입출금 save 함수 호출
    save(10000);  // 10000원 입금
    save(50000);  // 50000원 입금
    save(-10000); // 10000원 출금
    save(30000);  // 30000원 입금

    return 0;
}

// 입출금을 save메서드 정의 
void save(int money)
{
    static long balance = 0; // balance 변수를 정적 변수로 선언하여 함수 호출 간 유지

    if (money >= 0)
    {
        printf("%d \t", money); // 입금일 경우 금액 출력
    }
    else
    {
        printf("\t %d \t", -money); // 출금은 음수로 표현 

    }
    balance += money; // balance 갱신 
    printf("%d \n", balance); // 현재 잔고 출력
}
