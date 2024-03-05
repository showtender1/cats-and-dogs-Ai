#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX 16 //1부터 16 숫자
#define NUMBER 16 //16개 숫자출력

void main()
{
    int i, tmp;
    int save[NUMBER];
    int count = 0;
    int isSame = 0;
    srand(time(0));

    //숫자 추출
    while (count < NUMBER) {
        isSame = 0;
        tmp = rand() % MAX + 1;//1부터 45 출력
        for (int i = 0; i < count; i++) { //중복검사
            if (tmp == save[i]) { //중복이 있을때
                isSame = 1;
                break;
            }
        }
        if (isSame == 0) { //중복없음
            save[count] = tmp;
            count++;
        }
    }

    //결과 출력
    printf("1모둠 : ");
    for(i =0; i < 4; i++)
        printf("%d ", save[i]);
    printf("\n");
    printf("1모둠 : ");
    for(i =4; i < 8; i++)
        printf("%d ", save[i]);
    printf("\n");
    printf("1모둠 : ");
    for(i =8; i < 12; i++)
        printf("%d ", save[i]);
    printf("\n");
    printf("1모둠 : ");
    for(i =12; i < 16; i++)
        printf("%d ", save[i]);
    printf("\n");
}
