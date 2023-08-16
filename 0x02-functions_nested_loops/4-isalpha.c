#include "main.h"
/**
 *_isalpha - check main
 *@c: an output character
 *Description: function return 1 if letter is
 *upper or lower case
 *Return: 1 or 0 otherwise
 */

int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				isletter = 1;
		}
	}
	return (isletter);
}
