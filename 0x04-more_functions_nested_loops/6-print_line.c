#include "main.h"

/**
 * print_line - Entry point
 * @n: number of times the character _ should be printed
 *
 * Description: draws line
 *
 * Return: nothing
 */
void print_line(int n)
{
	int a = 0;

	while (a < n && n > 0)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
