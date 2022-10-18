#include "main.h"

/**
 * _islower -
 * @c: An input character
 * Description: checks if an alphabet is in lowercase
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _islower(int c)
{
	char i;
	int result = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			result = 1;
	}

	return (result);
}
