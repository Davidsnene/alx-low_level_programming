#include <stdio.h>
#include "main.h"

/**
 * main - Entry piont
 *
 * Description: sum of mutiples of 3 an multiple of 5
 * under 1024
 *
 * Return: nothing
 */
int main(void)
{
int a, b = 0;
	for (a = 0; a <= 1024; a++)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			b = b + a;
		}
	}
	
	printf("%d\n", b);

	return (0);
}
