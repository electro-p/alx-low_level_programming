#include "main.h"

/**
 * print_alphabet - Check description
 * prints alphabets a-z in lowercase followed by a new line
 * Returns nothing.
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
