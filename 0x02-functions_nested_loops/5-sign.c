#include "main.h"
/**
 * print_sign :print the sign of a number is
 * greater, equal or less than 0
 * @n: input number
 * Return: 1 if greater, 0 if equal or -1 if less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	putchar('\n');
}
