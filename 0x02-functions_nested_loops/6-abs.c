#include "main.h"

/**
 * _abs - Entry point
 * @x: number
 *
 * Description: computes the absolute value of an integer
 *
 * Return: always 0 (success)
 */
int _abs(int x)
{
	if (x < 0)
		x = x * -1;
	return (x);
}
