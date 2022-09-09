#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all single digit
 * numbers of base 10 starting from 0,
 * followed by a new line
 * using putchar function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 48;

	while (x < 58)
	{
		putchar(x);
		x++;
	}

	putchar('\n');
	return (0);
}
