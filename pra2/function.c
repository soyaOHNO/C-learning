#include<stdio.h>

int sum(int x, int y)
{
    int a;
    a = x + y;
    return a;
}

/*------------------------------------*/

int main(void)
{
    int number;
    number = sum(3, 5);
    printf("number = %d\n", number);
    return 0;
}

/*
 * 引数を受け取ったら，中の命令を実行して
 * 戻り値の数値を返す．
 */