#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: print alphabet 10 times follow by new line
 *
 * Return: always 0 (success)
 */
void print_alphabet_x10(void)
{
	int x;
	char y;

	for (x = 0; x < 10; ++x)
	{
		for (y = 'a'; y <= 'z'; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
}
