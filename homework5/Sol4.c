#include <stdio.h>
#define ROWS 3  // 학생 수
#define COLS 5  // 각 학생의 점수 수

int main(void)
{
    // 학생들의 점수를 2차원 배열로 초기화
    int a[ROWS][COLS] = { 
        {87, 98, 80, 76, 3}, 
        {99, 89, 90, 90, 0}, 
        {65, 68, 50, 49, 0}
    };
    
    int i;
    
    // 각 학생의 최종 성적을 계산하고 출력하는 반복문
    for (i = 0; i < ROWS; i++) {
        // 각 학생의 최종 성적을 계산
        double final_scores = a[i][0] * 0.3 + a[i][1] * 0.4 + a[i][2] * 0.2 + a[i][3] * 0.1 - a[i][4];
        
        // 학생의 최종 성적을 출력
        printf("학생 #%d의 최종성적 = %10.2f\n", i + 1, final_scores);
    }

    return 0;  // 프로그램을 성공적으로 종료
}
