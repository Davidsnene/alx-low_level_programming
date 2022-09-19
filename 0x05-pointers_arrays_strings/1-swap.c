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
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
