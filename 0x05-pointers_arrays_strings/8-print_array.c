#include <stdio.h>
#include "main.h"

/**
* print_array - Entry point
* @a: array
* @n: number of elements of the array to be printed
*
* Description:
*
* Return: Nothing
*/

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
		i++;
	}
	putchar('\n');
}
