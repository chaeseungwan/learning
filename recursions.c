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
    for(int i = 0; i < h; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}