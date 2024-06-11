//
//  Sol1.cpp
//  Homework2
//
//  Created by 이승엽
#include <stdio.h>

int main(void){
    int x,y;
    char star[] =  "*";
    for(y=0;y<5; y++){
        for(x=0;x<10;x++){
            printf("%s",star);
        }
        printf("\n");
    }
}

