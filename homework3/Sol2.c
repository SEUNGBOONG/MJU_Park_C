#include <stdio.h>
int x;//정수 x선언 
void sub(); //void sub() 메서드를 구현한 것을 호출 (전역변수)

int main(void)
{
    for(x=0; x<10; x++){ //x 에 0값 할당 10보다 작으면 반복 x+=1 추가(반복마다)
        sub();
    }   
}

void sub(){ //sub 메서드 구현 
    for(x=0;x<10;x++){
   // x에 0을 할당하고, x가 10보다 작은 동안 반복하며 x를 1씩 증가시킴
        printf("*");//출력값
    }
 
}