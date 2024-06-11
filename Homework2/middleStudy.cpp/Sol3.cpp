#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
    int randomNumber;
    char item;
    int str[5];
    int i;
    //변수 선언후 개행 


    srand((unsigned)time(NULL));


    while(1)
    {
        printf(" 경품 추천을 위해문자를 입력하시오:\n");
        item=getchar();
        i=0;

        if (item=='s')
        {
        printf("5개 숫자가 생성됩니다.\n");
            while (i<5)
            {
                time(NULL);
                randomNumber=rand()%17 * 3;
                
                if (randomNumber%3 ==0 && randomNumber!=0 )
                {   
                    if (str[i]!=str[i+1]) 
                        str[i]=randomNumber;
                        printf("%d\n",str[i]);
                        i++;
                }
            }
        }
        else if(item == 'q')
        {
            printf("프로그램을 종료합니다.");
            break;
        }
        else 
        {
            printf("다시 입력하세요:");
        }
    }return 0;
}