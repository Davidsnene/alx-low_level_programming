#include "main.h"

/**
 * print_numbers - Entry point
 *
 * Description: prints number follow by new line
 *
 * Return: nothing
 */
void print_numbers(void)
{
	char a = 0;

	while (a <= 9)
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
