#include "main.h"

/**
* _strcat - Entry point
* @dest: first string
* @src: second string
*
* Description: concatenates two strings
*
* Return: a char
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	for (j = 0; dest[j] != '\0'; j++)
		;
	while (src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}
	return (dest);
}
