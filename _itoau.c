#include "main.h"
/**
 * _itoa - my function to print nums
 * @i: the num
 * @strout: the string to save the num
 * @base: either hexa or octa or dec
 * @Return: string with the int
 */
char * _itoau(unsigned int i, char *strout, int base)
{
	char *str = strout;
	long unsigned int digit;

	while(i) {
	digit = i % base;
	*str = (digit > 9) ? ('A' + digit - 10) : '0' + digit;
	i = i / base;
	str ++;
	}
	*str = '\0';
	_strrev(strout);
	return strout;
}
