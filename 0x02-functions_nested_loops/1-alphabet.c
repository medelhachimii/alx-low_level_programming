#include "main.h"
/**
 * print alphabet -  prints the alphabet, in lowercase, followed by a new line.
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char character;
	character = 'a';

	while (character <= 'z')
	{
		_putchar('character');
		character++;
	}
	_putchar('\n')
}
