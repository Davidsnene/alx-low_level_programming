#include "main.h"

/**
* _strlen_recursion - Entry point
* @s: string to print
*
* Description: prints the lengh of a string
*
* Return: Nothing
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}
