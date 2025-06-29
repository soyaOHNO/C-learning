#include<stdio.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mult(int a, int b)
{
    return a * b;
}

double div(int a, int b)
{
    return (double)a / (double)b;
}

int main(void)
{
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    printf("x + y = %d\n", add(x,y));
    printf("x - y = %d\n", sub(x,y));
    printf("x * y = %d\n", mult(x,y));
    printf("x / y = %f\n", div(x,y));
    return 0;
}