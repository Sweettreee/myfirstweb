#include <stdio.h>

int main(void)
{
    // ---- ++ 뿔뿔 ---- //
    // int b = 20;
    // // b= b+1;
    // printf("b 는 %d\n", ++b);
    // printf("b 는 %d\n", b++);
    // printf("b 는 %d\n", b);

    // ---- 반복문 ---- //
    // for, while, do while
    
    // for(선언, 조건, 증감)
    // for(int i = 1; i <= 10; i++)
    // {
    //     printf("hello world %d\n", i);
    // }
    // while (조건)
    // int i = 1;
    // while(i <= 10)
    // {
    // printf("hello world %d\n", i++);
    // //i++;
    // }
    // do {  } while (조건);
    // int i = 1;
    // do {
    //     printf("hello world %d\n", i++);
    // } while (i <= 10);

    // ---- 2중 반복문 ---- //
    // for (int i = 1; i <= 3; i++)
    // {
    //     printf("첫 번째 반복문 : %d\n", i);

    //     for (int j = 1; j <= 5; j++)
    //     {
    //         printf("        두 번째 반복문 : %d\n", j);
    //     }
    // }
    // ---- multiplication table ---- //
    // for(int i = 2; i <= 9; i++)
    // {
    //     printf("%d단 계산\n", i);
    //     for (int j = 1; j <= 9; j++)
    //     {
    //         printf(" %d x %d = %d\n", i, j, i*j);
    //     }
    // }
    // ---- 이중문 파헤치기 ---- //
    /*
    *
    **
    ***
    ****
    *****
    */
    // for(int i = 0; i<5; i++)
    // {
    //     for(int j = 0; j<=i; j++)
    //     {
    //     printf("*");
    //     }
    //     printf("\n");
    // }

    /*
        *
       **
      ***
     **** 
    *****   
    */
//    for(int i = 0; i < 5; i++)
//    {
//         for(int j = 4; j>=i; j--)
//         {
//             printf("S");
//         }
//         for(int l = 0; l<=i; l++)
//         {   
//             printf("*");
//         }
//         printf("\n");
//    }
/*
        *
       ***
      *****
     *******
    *********
*/
    int floor;
    printf("몇 층으로 쌓겠느냐?");
    scanf("%d", &floor);
    for(int i=0; i< floor; i++)
    {
        for(int j= i ; j < floor - 1; j++)
        {
            printf(" ");
        }
        for(int k = 0; k < i * 2 + 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
    }