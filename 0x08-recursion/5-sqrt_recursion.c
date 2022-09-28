#include "main.h"

/**
* find_square_root - checks the input number from n to the base
* @n: number is squared and compared against base
* @base: base number to check
*
* Description:
*
* Return: natural square root of number base
*/
int find_square_root(int n, int base)
{
	if (n * n == base)
		return (n);
	if (n * n > base)
		return (-1);
	return (find_square_root(n + 1, base));
}
/**
* _sqrt_recursion - return the natural square root the a number n
* @n: number to check for square roots
*
* Description:
*
* Return: the natural square root of number n
*/
int _sqrt_recursion(int n)
{
	return (find_square_root(1, n));
}
