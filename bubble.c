#include <stdio.h>
#include <stdlib.h>
void bubble_sort(int list[], int n);
void anagram(int case1[], int case2[]);
// 지시문
//'에너그램’이란 문자를 재배열하여 다른 뜻을 가진 단어로 바꾸는 것을 말합니다. 
// 예를 들면 영어의 ‘tea’와 ‘eat’과 같이, 각 단어를 구성하는 알파벳의 구성은 같지만 뜻은 다른 두 단어를 말합니다. 
// 우리말에는 ‘문전박대’와 ‘대박전문’과 같은 예를 들 수 있습니다. 우리는 문자 대신 숫자를 이용해서 애너그램을 찾는 프로그램을 만들어봅시다. 
// 5자리의 숫자 1쌍이 입력으로 주어지며 애너그램일 경우에는 “True”를 아닐 경우에는 “False”를 출력하도록 합시다. 
// 숫자를 입력받는 부분은 따로 구현하지 않고 프로그램 내부에 배열로 선언하는 것으로 가정하고, 숫자에는 중복이 있을 수 있습니다.
// 입력값: 12345, 54321 -> 출력값: True
// 입력값: 14258, 25431 -> 출력값: False

int main(void)
{
    int number_case1[5] = {4,3,9,2,8};
    int number_case2[5] = {2,9,3,8,4};
    int number_case3[5] = {1,2,3,4,5};

    int n = 5;
    bubble_sort(number_case1, n);
    bubble_sort(number_case2, n);
    bubble_sort(number_case3, n);

    anagram(number_case2, number_case3);
    anagram(number_case1, number_case2);

    return 0;
}

void bubble_sort(int list[], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j<n-i-1; j++) 
        {
            if(list[j]>list[j+1]) 
            {
                int temp = list[j]; 
                list[j] = list[j+1]; 
                list[j+1] = temp; 
            }
        }
    }
}

void anagram(int case1[], int case2[])
{
    int num = 0;
    for (int i = 0; i < 5; i++)
    {
        if(case1[i] == case2[i])
        {
            num++;
        }   
    }
    if (num == 5)
    {
        printf("True \n");
    }
    else
    {
        printf("False \n");
    }
    
}


// void anagram(int case1[], int case2[])
// {
//     int num1; int num2;
//     for (int i = 0; i < 5; i++)
//     {
//         if(case1[i] != case2[i])
//         {
//             printf("출력값 : False");
//             break;
//         }   
//         else if(case1[i] == case2[i])
//         {
//             continue;
//         }
//     }
// }