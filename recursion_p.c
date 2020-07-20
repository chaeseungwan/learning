#include <stdio.h>

void draw(int h);

int main(void) 
{   
    int height;
    printf("높이를 입력해주세요 \n");
    scanf("%d", &height);
    draw(height);
}


void draw(int h)
{
    if (h == 0)
    {
        return;     // 재귀함수의 종료조건 설정
    }

    draw(h-1);  // 재귀함수(54321 -> 12345)

    for(int i = 0; i < h; i++)
    {
        printf("#");
    }
    printf("\n");
}

