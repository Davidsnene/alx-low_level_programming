#include "main.h"

/**
 * print_last_digit - Entry point
 * @n: number
 *
 * Description: prints the last digit of a number
 *
 * Return: always 0 (success)
 */
int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (x < 0)
		x = x * (-1);

	_putchar(x);
	return (x);
}
