#include "main.h"

/**
* reset_to_98 - ENtry point
* @n: pointer
*
* Description: takes a pointer to an int as parameter
* and updates the value it points to to 98
*
* Return: Nothing
*/

void reset_to_98(int *n)
{
	reset_to_98(*98);
	return (0);
}
