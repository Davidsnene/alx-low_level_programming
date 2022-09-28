#include "main.h"

/**
* factorial - Entry point
* @n: Number factorial to give
*
* Description: give the factorial of n
*
* Return: -1 (error)
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
return (0);
}
