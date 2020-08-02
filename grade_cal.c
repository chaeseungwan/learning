// 2. 지시문
//     - 학생의 점수로 학점을 구하는 프로그램을 작성하시오.
//     - 키보드에서 입력받은 성적 (0 ~ 100 점) 의 유효성을 체크
//     - 학점은 배열을 이용하여 초기화 (아래 “학점 테이블” 참조)
//     - 학점은 “학점” 과 같이 계산하는데, 반드시 “학점 테이블”을 사용하여 계산하고 학점도 “학점 테이블”의 내용을 출력
//     - 성적을 입력하여 계속 학점을 구하며 특별한 문자인 “-1” 을 입력하면 프로그램을 종료

#include <stdio.h>
#include <stdlib.h> //exit함수 호출

 
int main(void)
{

    //const : 상수로 지정(고정된 값으로 값 변경이 불가능하다)
    //C에서는 문자열은 배열+문자열로 포인터 배열로 구현이 가능하다(안에는 ""인거 참고하기)
    const int score[] = {95, 90, 85, 80, 75, 70, 65, 60, 0};
    const char *grade[] = {"A+", "A", "B+", "B", "C+", "C", "D+", "D", "F"};
    
    printf("학점 계산 프로그램 \n");
    printf("종료를 원하면 -1를 입력 \n");

// 배열의 크기는 현재 10개이며 정수형이기 때문에 4*10으로 40이다 그래서 이것을 int로 나눠 배열의 크기를 구함
    for (int i = 0; i < sizeof(score)/sizeof(int); i++) 
    {
        printf("%d \t", score[i]);
    }
    printf("\n");

    for (int i = 0; i < 9; i++)
    {
        printf("%s \t", grade[i]);
    }
    printf("\n");

  
    while(1)
    {
        int get_score;
        printf("성적을 입력해주세요 (0 ~ 100) : ");
        scanf("%d", &get_score);

        int z = 0;
        for(int i = 0; i < 9; i++)
        {
            if(get_score >= score[i])
            {
                z = i;
                break;
            }
        }

        if (get_score <= 100 && get_score>=0)
        {
            printf("학점은 %s 입니다 \n", grade[z]);
        }

        else if (get_score == -1)
        {
            exit(0); 
        }

        else
        {
            printf("%d, 성적을 올바르게 입력해주세요 성적의 범위는 0 ~ 100까지 입니다 \n", get_score);
        }

    }

    return 0;
}