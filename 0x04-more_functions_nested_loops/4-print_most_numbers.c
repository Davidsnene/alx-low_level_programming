#include "main.h"

/**
 * print_most_numbers - Entry point
 *
 * Description: print nubers except 2 and 4
 *
 * Return: the number
 */
void print_most_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		if (a != 2 && a != 4)
		{
			_putchar(a + '0');
		}
		a++;
	}
	_putchar('\n');
}
