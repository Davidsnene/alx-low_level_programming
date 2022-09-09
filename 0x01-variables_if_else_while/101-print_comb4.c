#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible combinations
 * of three digits using putchar
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int y, x, z;

	for (x = 48; x <= 55; x++)
	{
		for (y = 49; y <= 56; y++)
		{
			for (z = 50; z <= 57; z++)
			{
				if (z > y && y > x)
				{
					putchar(x);
					putchar(y);
					putchar(z);
					{
					if (x != 55 || y != 56 || z != 57)
					{
						putchar(',');
						putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
