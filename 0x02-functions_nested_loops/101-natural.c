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
int a;
int b;
	for (a = 0; a <= 1024; a++)
	{
		if (a % 3 == 0)
			printf("%d, ", a);

	}

	for (b = 0; b <= 1024; b++)
	{
		if (b % 5 == 0)
			printf("%d, ", b);
	}

	return (a + b);
}
