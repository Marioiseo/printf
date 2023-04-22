#include "main.h"
/**
 * _itoa - my function to print nums
 * @i: the num
 * @strout: the string to save the num
 * @base: either hexa or octa or dec
 * @Return: string with the int
 */
char * _itoa(int i, char *strout, int base)
{
  char *str = strout;
 long  int digit, sign = 0;
  if (i < 0) {
    sign = 1;
    i *= -1;
  }
  while(i) {
    digit = i % base;
    *str = (digit > 9) ? ('A' + digit - 10) : '0' + digit;
    i = i / base;
    str ++;
  }
  if(sign) {
  *str++ = '-';
  }
  *str = '\0';
  _strrev(strout);
  return strout;
}
