#include "main.h"




int printoctal(va_list pt)
{
	int count = 0;
	char buff[1024];

	while (pt)
	{
		_itoau(va_arg(pt, int), buff, 8);
		_putchar(*buff);
		count++;
		pt++;
	}
	return (count);
}
int printhexa(va_list pt)
{
	int count = 0;
	char buff[1024];

	while (pt)
	{
		_itoau(va_arg(pt, int), buff, 16);
		_putchar(*buff);
		count++;
		pt++;
	}
	return (count);
}
int printbin(va_list pt)
{
	int count = 0;
	char buff[1024];

	while (pt)
	{
		_itoau(va_arg(pt, int), buff, 2);
		_putchar(*buff);
		count++;
		pt++;
	}
	return (count);
}
