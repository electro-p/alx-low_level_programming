#include "main.h"

/**
 * print_sign - Check main.h
 * @n: An input number
 * Description:  prints the sign of the number
 * Return: 1 n is positive, 0 if 0, or -1 negative
 */
int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('-');
	}

	return (value);
}
