//
//  main.c
//  chap003
//
//  Created by 채명식 on 4/7/25.
//

/*파일명 : chap03-3
 * 내용 : 질량과 높이를 입력받아 위치 에너지를 구하는 프로그램을 작성하시오. 질량은 kg 단위, 높이는 m 단위로 입력받는다.
 * 작성자 : 채명식
 * 날짜 : 4/7
 * 버전 : v1.0
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
double calcPositionEnergy(int weight, int height)
{
    return 9.8 * weight * height;
    
}
void assignment0303(void)

{
    double c;
    int weight;
    printf("질량(kg)?");
    scanf("%d",&weight);
    int height;
    printf("높이(m)?");
    scanf("%d",&height);
    c = calcPositionEnergy (weight, height);
    printf("위치에너지:%lf J\n ", c);
    
}
int main(void)
{
    assignment0303();
    return 0;
}
