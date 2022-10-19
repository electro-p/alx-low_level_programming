#include "main.h"

/**
 * _isalpha - Check main.h
 * @c: An input character
 * Description: checks if @c is an alphabet.
 * Return: 1 if an alphabet or 0 otherwise.
 */
int _isalpha(int c)
{
	char alpha;
	int is_letter = 0;

	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		if (c == alpha | c == alpha + 'a' - 'A')
			is_letter = 1;
			break;
		}
	}
	return (is_letter);
}
