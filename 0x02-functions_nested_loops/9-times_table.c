#include "main.h"

/**
 * times_table - Check main.h
 * Description: It prints 9 times table starting with 0
 * Return: Nothing.
 */
void times_table(void)
{
	int s, f, n;

	for (f = 0; f <= 9; f++)
	{
		for (s = 0; s <= 9; s++)
		{
			n = f * s;

			if ((n / 10) == 0)
			{
				if (s != 0)
					_putchar(' ');
				_putchar(n + '0');
				if (s == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				if (s == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

