#include "main.h"
#include <stdlib.h> 
/**
 * _printf - my first advanced implementation
 * @format: its the % i guess
 * Return: int num
 */
int _printf(const char *format, ...)
{
	int i = 0, j = 0;
	char buff[1024];
	char *strptr;
		va_list pt;
	char tmp[100];

	va_start(pt, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					{
						buff[j] = (char)va_arg(pt, int);
						j++;
						break;
					}
				case 'd' || 'i' :
				{
					itoa(va_arg(pt, int), tmp, 10);
						strcpy(&buff[j], tmp);
						j += strlen(tmp);
						break;
				}
				case 'x':
				{
					itoa(va_arg(pt, int), tmp, 16);
						strcpy(&buff[j], tmp);
						j += strlen(tmp);
						break;
				}
				case 's':
				{
						strptr = va_arg(pt, char *);
						strcpy(&buff[j], strptr);
						j += strlen(strptr);
						break;
				}
				case '%':
				{
					buff[j] = (char)va_arg(pt, int);
					j++;
					break;
				}
			}
		}
		else
		{
			buff[j] = format[i];
				j++;
		}
		i++;
	}
	fwrite(buff, j, 1, stdout);
	va_end(pt);
	return (j);
}
