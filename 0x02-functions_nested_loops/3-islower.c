#include "main.h"

/**
 * _islower - Entry point
 * @x: alphabet letter
 *
 * Description: checks for lowercase character
 *
 * Return: always 0 (success)
 */
int _islower(int x)
{
	if (x >= 'a' && x <= 'z')
		return (1);
	else
		return (0);

}
