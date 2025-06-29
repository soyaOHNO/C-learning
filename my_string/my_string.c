#include "my_string.h"

char *my_strcat(char *dest, const char *src)
{
    char *fmt = dest;
    while (*fmt) fmt++;
    while (*src) *fmt++ = *src++;
    *fmt = '\0';
    return dest;
}

char *my_strcpy(char *dest, const char *src)
{
    char *fmt = dest;
    while (*src) *fmt++ = *src++;
    *fmt = '\0';
    return dest;
}

int my_strcmp(const char *s1, const char *s2)
{
    while ((*s1 || *s2) && (*s1 == *s2)){
        s1++;
        s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

int my_strlen(const char *str)
{
    int i = 0;
    while (*str++) i++;
    return i;
}
