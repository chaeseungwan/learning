#include <stdio.h>

float average(int length, int array[]);

int main(void)
{
    // 사용자로부터 점수의 갯수 입력
    int n;
    printf("Scores: \n");
    scanf("%d", &n);

    // 점수 배열 선언 및 사용자로부터 값 입력
    int scores[n];
    int num;
    for (int i = 0; i < n; i++)
    {   
        scanf("%d", &num);
        scores[i] = num;
    }

    // 평균 출력
    printf("Average: %.1f\n", average(n, scores));
}

//평균을 계산하는 함수
float average(int length, int array[])
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return sum / length;
}