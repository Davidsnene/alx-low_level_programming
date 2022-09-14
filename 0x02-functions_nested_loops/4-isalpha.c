#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * @x: character
 *
 * Description: hecks for alphabetic character
 *
 * Return: always 0 (success)
 */
int _isalpha(int x)
{
	if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
		return (1);
	else
		return (0);

}
