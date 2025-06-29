#include<stdio.h>
#include "my_string.h"
/*
* >gcc main.c my_string.c edit_distance.c
* >a.exe
*/

int main(void)
{
    char buf[100] = "Hello";
    my_strcat(buf, " world!");
    char hel[100];
    my_strcpy(hel, buf);
    printf("%s\n%s\n%d\n%d\n", buf, hel, my_strcmp(buf, "Hello world"), my_strlen(buf));
    char a[] = "Heo Worl", b[] = "Hello World!";
    printf("edit_distance(\"%s\", \"%s\") = %d\n", a, b, edit_distance(a, b));
    return 0;
    /*FIXME: char a[] = "Heo Worl", b[] = "Hello World!"; このときにエラーが出る*/
}