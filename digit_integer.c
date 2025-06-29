#include<stdio.h>

int main(void)
{
    /*文字列で表示*/
    char Integer[100] = "1, 2, 3, 4, 5, 6, 7, 8, 9";
    printf("digit is...\n%s\n", Integer);

    /*数値を足し合わせていって表示*/
    printf("1");
    for(int i = 2;i <= 9;i++) printf(", %d", i);
    printf("\n");
    return 0;
}