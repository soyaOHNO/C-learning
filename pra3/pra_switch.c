#include<stdio.h>

char digit_to_char(int num)
{
    switch (num)
    {
    case 0: return '0';
    case 1: return '1';
    case 2: return '2';
    case 3: return '3';
    case 4: return '4';
    case 5: return '5';
    case 6: return '6';
    case 7: return '7';
    case 8: return '8';
    case 9: return '9';
    default: printf("Not digit!!"); return 0;
    }
}

int main(void)
{
    int n;
    char dig;
    scanf("%d", &n);
    dig = digit_to_char(n);
    printf("number = %c\n", dig);
    return 0;
}