#include "main.h"

/**
* _strncpy - Entry point
* @dest: Destination of the pointer to the string
* @src: Source of the pointer to the string to copy
* @n: Number of bytes to copy.
*
* Description:
*
* Return: Pointer to the destination string.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i]	= src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
