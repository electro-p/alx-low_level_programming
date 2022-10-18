#include "main.h"

/**
 * print_last_digit
 * @i: An integer input
 * @ld: last digit
 * Description: This function prints the last digit of a number
 * Return: last digit of number r
 */
int print_last_digit(int i)
{
	int ld;

	if (i < 0)
		ld = -1 * (r % 10);
	else
		ld = r % 10;
	
	_putchar(ld + '0');
	return (ld);
	
}
