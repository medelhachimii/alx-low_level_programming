#include "main.h"

/**
 * print_alphabet_x10 - check
 * Description: prints the alphabet x10, in lowercase, followed by a new line.
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char a;
	int b;

	for (b = 0; b < 10; b++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
