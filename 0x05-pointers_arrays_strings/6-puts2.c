#include "main.h"

/**
* puts2 - Entry point
* @str: string to print
*
* Description:
*
* Return: Nothing
*/

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
