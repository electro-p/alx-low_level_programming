#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int i;
	long int fibonacci[98];

	fibonacci[0] = 1;
	fibonacci[1] = 2;
	printf("%ld, %ld, ", fibonacci[0], fibonacci[1]);

	for (i = 2; i < 97; i++)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
		printf("%ld, ", fibonacci[i]);
	}
	fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
	printf("%ld\n", fibonacci[i]);
	return (0);
}
