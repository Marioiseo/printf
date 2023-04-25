#include "main.h"


/**
 * _printf - my first advanced implementation
 * @format: its the % i guess
 * Return: int num
 */
int _printf(const char *format, ...)
{
	int i = 0;
	va_list pt;
	int count = 0;
	char *poi;

	va_start(pt, format);
	if (!format || (format[0] == '%' && !format[i]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
	       return (-1);
	while (format && format[i])
	{
		poi = (char *)format;
		if (*poi == '%')
		{
			poi++;
		count += get_spec(poi, pt);
		}
		else
		{
		_putchar(*poi);
		count++;
		}
		i++;
	}
	va_end(pt);
	return (count);
}
