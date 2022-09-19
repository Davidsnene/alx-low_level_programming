#include "main.h"

/**
* swap_int - Entry point
* @a: first integer
* @b: second integer
*
* Description: swaps the values of two integers
*
* Return: Nothing
*/

void swap_int(int *a, int *b)
{
	*a = *a + '1';
	*b = *b + '1';
	*a = *b - '1';
	*b = *a - '1';
}
