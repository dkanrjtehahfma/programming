//
//  main.c
//  chap00003
//
//  Created by 채명식 on 4/7/25.
//


/*파일명 : chap03-6
 * 내용 : 아파트의 면적을 제곱미터(m2)로 입력받아 몇 평인지 출력하는 프로그램을 작성하시오. 1m2는 0.3025평에 해당한다 프로그램을 작성할 떄 아름 있는 상수를 이용해보자.
 * 작성자 : 채명식
 * 날짜 : 4/7
 * 버전 : v1.0
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment(void)
{
    float a;
    printf("아파트의 면적(제곱미터)?");
    scanf("%lf", &a);
    float b;
    b = 0.3025;
    printf("113.00 제곱미터 =%f 평\n", a * b);
    
}
int main(void)
{
    
    assignment();
    return 0;
}
