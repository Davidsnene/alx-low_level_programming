#include "main.h"

/**
* _atoi - Entry point
* @s: string
*
* Description:
*
* Return: Nothing
*/

int _atoi(char *s)
{
	int thesign = 1;
	unsigned int thenum = 0;

	do {

		if (*s == '-')
			thesign *= -1;

		else if (*s >= '0' && *s <= '9')
			thenum = (thenum * 10) + (*s - '0');

		else if (thenum > 0)
			break;
	} while (*s++);

	return (thenum * thesign);
}
