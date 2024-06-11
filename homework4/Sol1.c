#include <stdio.h> //라이브러리

#define STUDENTS 5 // 학생 수를 나타내는 상수를 5로 정의

int main(void) // 프로그램 실행이 시작되는 main 함수입니다.
{
    int scores[STUDENTS]; // 학생들의 점수를 저장할 배열
    int sum = 0; // 점수의 총합을 저장할 변수
    int i, average; // 반복문에서 사용할 변수와 평균을 저장할 변수
    for(i=0;i<STUDENTS;i++){ // 학생 수만큼 반복하는 반복문
        printf("학생들의 성적을 입력하시오:"); // 사용자에게 입력 지시 메시지 출력
        scanf("%d",&scores[i]); // 사용자로부터 학생의 성적을 입력받는 배열
    }

    for (i=0; i<STUDENTS;i++) // 학생 수만큼 반복하는 반복문
        sum+=scores[i]; // 배열에 저장된 점수를 모두 더하여 총합을 계산합니다.
    average=sum/STUDENTS; // 평균을 계산
    printf("성적 평균=%d\n",average); // 평균을 출력합니다.
    return 0; // 프로그램 종료
}
