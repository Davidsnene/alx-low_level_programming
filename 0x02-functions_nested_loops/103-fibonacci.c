#include <stdio.h>
/**
  * main - Entry point
  *
  * Description: sum even fibonacci numbers under 4000000
  *
  * Return: Nothing.
  */
int main(void)
{
	unsigned long count, a, b, c, sum;

	a = sum = 0;
	b = 1;
	for (count = 0; count < 50; count++)
	{
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0 && c < 4000000)
		{
			sum += c;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
