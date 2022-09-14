#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Entry point
 * @n: parameter
 *
 * Description: prints all natural numbers from n to 98,
 * followed by a new line.
 *
 * Return: always 0 (success)
 */
void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 98; n++)
{
if (n == 98)
{
printf("%d", n);
printf("\n");
break;
}
else
{
printf("%d, ", n);
}
}
}
else
{
for (; n >= 98; n--)
{
if (n == 98)
{
printf("%d", n);
printf("\n");
break;
}
else
{
printf("%d, ", n);
}
}
}
}
