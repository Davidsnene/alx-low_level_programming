#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower_alpha = 'a';
	char upper_alpha = 'A';

	while (lower_alpha <= 'z')
	{
		putchar(lower_alpha);
		lower_alpha++;
	}
	while (upper_alpha <= 'Z')
	{
		putchar(upper_alpha);
		upper_alpha++;
	}

	putchar('\n');
	return (0);
}
