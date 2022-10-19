#include "main.h"

/**
 * print_last_digit - Check description
 * @i: An integer input
 * Description: This function prints the last digit of a number
 * Return: last digit of number i
 */
int print_last_digit(int i)
{
	int ld;

	if (i < 0)
		ld = -1 * (i % 10);
	else
		ld = i % 10;
	_putchar(ld + '0');
	return (ld);

}
