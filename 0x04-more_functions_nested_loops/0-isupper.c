#include "main.h"

/**
 * _isupper - Entry point
 * @c: Alphabet letter
 *
 * Description: prints 1 if upper letter otherwise 0
 *
 * Return: nothing
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
