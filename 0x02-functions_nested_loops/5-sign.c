#include "main.h"

/**
 * print_sign - Entry point
 *@a: number
 *
 * Description: prints the sign of a number
 *
 * Return: always 0 (success)
 */
int print_sign(int a)
{
	if (a > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (a == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (a < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('-');
		return ('/');
	}
}
