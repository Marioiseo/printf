#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
typedef struct spec
{
	char *sp;
	int (*fun)(va_list);
}spec_t;
int (*spec(char *a))(va_list pt);
int get_spec(char *a, va_list pt);
int printchar(va_list pt);
int printstr(va_list pt);
int printint(va_list pt);
int printuns(va_list pt);
int printpercent(va_list pt);
int printoctal(va_list pt);
int printhexa(va_list pt);
int printbin(va_list pt);
int _printf(const char *format, ...);
char *_strrev (char *str);
char * _itoau(unsigned int i, char *strout, int base);
char * _itoa(int i, char *strout, int base);
int _putchar(char c);


#endif
