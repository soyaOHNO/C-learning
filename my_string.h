#ifndef MY_STRING_H
#define MY_STRING_H

char *my_strcat(char *dest, const char *src);
char *my_strcpy(char *dest, const char *src);
int my_strcmp(const char *s1, const char *s2);
int my_strlen(const char *str);

int edit_distance(const char *s1, const char *s2);

#endif