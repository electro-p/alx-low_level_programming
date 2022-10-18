#include "main.h"

/**
 * _isalpha -
 * @c: An input character
 * Description: checks if @c is an alphabet.
 * Return: 1 if an alphabet or 0 otherwise.
 */
int _isalpha(int c)
{
	char alpha;
	int is_letter = 0;

	for (alpha = 'a'; alpha <= 'z'; alpha)
	{
		if (c == alpha || c == (alpha-32))
			is_letter = 1;
			break;
		}
	}
	return (is_letter);
}
