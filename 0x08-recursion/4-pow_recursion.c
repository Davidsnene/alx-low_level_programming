#include "main.h"

/**
* _pow_recursion - Entry point
* @x: number to raise to power
* @y: power to raise x to
*
* Description:
*
* Return: value of x raised to the power of y
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y <= 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
return (0);
}
