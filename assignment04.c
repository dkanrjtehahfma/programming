//
//  main.c
//  chap0003
//
//  Created by 채명식 on 4/7/25.
//

/* 파일명 chap03-4
 
 내용 : 물체에 작용한 힘의 크기와 힘의 방향으로 이동한 고리를 입력받아 한 일의 양을 구하는 프로그램을 작성하시오. 힘의 크기는 N 단위로 입력받고, 이동한 거리는 m 단위로 입력받는다.
* 작성자 : 채명식
* 날짜 : 4/7
* 버전 : v1.0
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 void assignment(void)
{
     int a;
     printf("힘(N)?");
     scanf("%d", &a);
     int b;
     printf("이동거리(m)");
     scanf("%d", &b);
     printf("일의 양:%d J\n", a * b);
     
 }
int main(void)
{
    assignment();
    return 0;
    
}
    
    

