#include "main.h"

/**
* _puts - Entry point
* @str: string to print
*
* Description: print string
*
* Return: the sting
*/

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
	_putchar(i);

	i++;
	}
	_putchar("\n");
}
