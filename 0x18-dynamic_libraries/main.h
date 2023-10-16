#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int);
int _isupper(int c);
int _isdigit(int c);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strcat(char *dest, char *src);
char *_memset(char *s, char b, unsigned int n);
char *_strncat(char *dest, char *src, int n);
int _atoi(char *s);
char *_strchr(char *s, char c);
int _strlen(char *s);
char *_strncpy(char *dest, char *src, int n);
void _puts(char *str);
int _strcmp(char *s1, char *s2);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
char *_strcpy(char *dest, char *src);


#endif
