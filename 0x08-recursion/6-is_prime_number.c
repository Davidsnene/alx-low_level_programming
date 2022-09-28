#include "main.h"

/**
* is_it_divisible - checks recursively the input from is_prime_number
* @n: iterator
* @base: base number to check
*
* Description:
*
* Return: 1 if n is a prime, otherwise 0
*/
int is_it_divisible(int n, int base)
{
	if (base % n == 0 || base < 2)
		return (0);
	else if (n == base - 1)
		return (1);
	else if (base > n)
		return (is_it_divisible(n + 1, base));
	return (1);
}
/**
* is_prime_number - checks if the number is a prime number
* @n: the number to check
*
* Description:
*
* Return: 1 if n is a prime, otherwise 0
*/
int is_prime_number(int n)
{
	return (is_it_divisible(2, n));
}
