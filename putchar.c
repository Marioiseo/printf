#include "main.h"
#include <unistd.h>
/**
 * _putchar - my own putchar implementation
 * @c: char c
 * Return: int
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
