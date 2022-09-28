#include "main.h"

/**
* _print_rev_recursion - Entry point
* @s: string to print
*
* Description: prints string in reverse
*
* Return: Nothing
*/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
