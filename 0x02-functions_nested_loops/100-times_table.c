#include "main.h"

/**
 * print_times_table - Check description
 * Description: prints times table for numbers from 0-14
 * @n: An input integer value
 * Return: 0
 */

void print_times_table(int n) {
    int i,
    j;

    if (n > 0 && n < 15) {
        for (i = 0; i <= n; i++) {
            _putchar('0');
            /*Plotting table horizontally*/
            for (j = 1; j <= n; j++) {
                int m = i * j;
                if (m <= 9) {
                    _putchar(',');
                    _putchar(' ');
                    _putchar(' ');
                    _putchar(' ');
                    _putchar(m + '0');
                }
                else if (m > 9 && m <= 99) {
                    _putchar(',');
                    _putchar(' ');
                    _putchar(' ');
                    _putchar(m / 10 + '0');
                    _putchar(m % 10 + '0');
                }
                else
                {
                    _putchar(',');
                    _putchar(' ');
                    _putchar(m / 100 + '0');
                    _putchar(m / 10 % 10 + '0');
                    _putchar(m % 10 + '0');
                }
            }
            _putchar('\n');
        }
    }
    return 0;
}