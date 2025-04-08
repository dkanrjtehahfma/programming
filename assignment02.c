//
//  assignedment02.c
//  test1
//
//  Created by 채명식 on 4/7/25.
//

/*파일명 : chap03-2
 * 내용 : 가로의 길이와 세로의 길이를 입력받아 직사각형의 넓이와 둘레를 구하는 프로그램을 작성하시오.
 * 작성자 : 채명식
 * 날짜 : 4/7
 * 버전 : v1.0
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void slove(void)
{
    int a;
    printf("가로의 길이 ?");
    scanf("%d",&a);
    int b;
    printf("세로의 길이 ?");
    scanf("%d", &b);
    printf("직사각형의 넓이%d\n", (a*b));
    printf("직사각형의 둘레%d\n", 2*(a+b));
    
}
int main(void)
{
    slove();
    return 0;
}
