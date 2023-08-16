#include "main.h"
/**
 * print_sign : check main
 * @n: input number
 * DEscription: determines if the input number is
 * greater, equal or less than 0
 *Return: 1 if greater, 0 if equal or -1 if less than zero
 */

input print_sign(int n)
{
	if  n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
	putchar('\n');
}
