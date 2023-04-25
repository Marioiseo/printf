#include "main.h"







int printchar(va_list pt)
{
	if (pt)
	_putchar(va_arg(pt, int));
	return (1);
}
int printstr(va_list pt)
{
	int count = 0;

	while (pt)
	{
	_putchar(va_arg(pt, int));
	count++;
	pt++;
	}
	return (count);
}
int printint(va_list pt)
{
	int count = 0;
	char buff[1024];

	while (pt)
	{
		_itoa(va_arg(pt, int), buff, 10);
		_putchar(*buff);
			pt++;
			count++;
	}
	return (count);
}
int printuns(va_list pt)
{
	int count = 0;
	char buff[1024];

	while (pt)
	{
	_itoau(va_arg(pt, int), buff, 10);
	_putchar(*buff);
	pt++;
	count++;
	}
return (count);
}
int printpercent(va_list pt)
{
	if (pt)
		_putchar('%');
	return (1);
}
