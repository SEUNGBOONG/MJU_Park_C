#include <stdio.h> // 라이브러리
#define SIZE 10 // 좌석 수를 나타내는 상수를 10으로 정의

int main(void) 
{
    char ans1; // 예약 여부를 입력받을 변수
    int ans2, i; // 좌석 번호와 반복문에서 사용할 변수를 선언
    int seats[SIZE] = {0}; // 좌석 예약 상태를 나타내는 배열을 선언하고 0으로 초기화

    while(1){ // 무한 루프입니다.
        printf("좌석을 예약하시겠습니까? y or n"); // 사용자에게 예약 여부 입력값 
        scanf(" %c", &ans1); // 사용자의 입력을 받습니다.
  
        if(ans1 == 'y'){ // 사용자가 예약을 원할 경우
            printf("--------------\n");
            printf(" 1 2 3 4 5 6 7 8 9 10\n" );
            printf("--------------\n");
            for(i = 0; i < SIZE; i++) // 좌석 상태를 출력
                printf("%d", seats[i]);
            
            printf("\n");
            printf("몇번째 좌석을 예약하시겠습니까?"); // 사용자에게 예약할 좌석 번호를 입력받기
            scanf("%d", &ans2); // 사용자의 입력을 받습니다.
            if(ans2 <= 0 || ans2 > SIZE){ // 입력된 번호가 범위를 벗어날 경우
                printf("1부터 10사이의 숫자를 입력하시오\n");
                continue; // 반복문의 처음으로 돌아갑니다.
            }
            if(seats[ans2 - 1] == 0){ // 해당 좌석이 예약되지 않은 경우
                seats[ans2 - 1] = 1; // 좌석을 예약 처리합니다.
                printf("예약되었습니다."); // 예약 완료 메시지를 출력합니다.
            }
            else // 해당 좌석이 이미 예약된 경우
                printf("이미 예약된 자리입니다.\n"); // 이미 예약된 좌석임을 알리는 메시지를 출력합니다.
        }
        else if(ans1 == 'n') // 사용자가 예약을 원하지 않는 경우
            return 0; 
    } 
    return 0;
}
