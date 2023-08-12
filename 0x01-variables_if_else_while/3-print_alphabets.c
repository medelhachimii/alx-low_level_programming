#include<stdio.h>
/**
 * main - main block
 * description: use 'putchar' to print lowercase and then in uppercase alphabet
 *
 * Returne: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
