#include "main.h"

/**
* _strncat - Entry point
* @dest: first string
* @src: second string
* @n: the most number of bytes of src
*
* Description:
*
* Return: concatenated char
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
		;
	while (src[i] != '\0' && i < n)
	{
		dest[j + i] = src[i];
		i++;
	}
	return (dest);
}
