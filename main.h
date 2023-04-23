#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFF_SIZE 1024

int _printf(const char *format, ...);
char *_strrev (char *str);
char * _itoa(int i, char *strout, int base);
int _putchar(char c);


#endif
