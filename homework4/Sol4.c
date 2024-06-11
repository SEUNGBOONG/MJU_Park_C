#include <stdio.h> // 기본 라이브러리를 
#include <stdlib.h> // (난수 및 메모리 할당 함수) 라이브라리
#include <time.h> // 표준 시간 라이브러리를 
#define SIZE 10 // 배열 크기를 나타내는 상수를 10 선언

int main(void){ // main 함수입니다.
    int prices[SIZE] = {0}; // 가격을 저장할 배열을 선언하고 0으로 초기화합니다.
    int i, minimum; // 반복문에서 사용할 변수와 최소값을 저장할 변수를 선언합니다.
    
    printf("------------------\n"); // 구분선
    printf("1 2 3 4 5 6 7 8 9 10\n"); // 가격의 인덱스를 출력합니다.
    printf("------------------\n"); // 구분선

    srand((unsigned)time(NULL)); // 난수 생성기를 초기화
    for(i = 0; i < SIZE; i++){ // 배열의 각 요소에 난수를 생성
        prices[i] = (rand() % 100) + 1; // 1에서 100 사이의 난수를 생성하여 배열에 저장
        printf("%-3d", prices[i]); // 생성된 가격을 출력합니다.
    }
    printf("\n\n"); // 줄 바꿈

    minimum = prices[0]; // 최소값을 배열의 첫 번째 요소로 초기화
    for(i = 1; i < SIZE; i++){ // 배열을 비교하며 최소값을 찾습니다.
        if(prices[i] < minimum) // 현재 요소가 최소값보다 작으면
            minimum = prices[i]; // 최소값을 갱신합니다.
    }
    printf("최소값은 %d입니다.\n", minimum); // 최소값을 출력합니다.
    return 0; // 프로그램을 종료합니다.
}
