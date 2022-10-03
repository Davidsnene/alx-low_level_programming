#include "main.h"
#include <stdlib.h>

/**
* str_concat - Entry point
* @s1: The string to be concatenated upon.
* @s2: The string to be concatenated to s1.
*
* Description: concatenates two strings
*
* Return: NULL or string concatenated
*/

char *str_concat(char *s1, char *s2)
{
	char *concat_s;
	int i, concat_i = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	concat_s = malloc(sizeof(char) * len);

	if (concat_s == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat_s[concat_i++] = s1[i];

	for (i = 0; s2[i]; i++)
		concat_s[concat_i++] = s2[i];

	return (concat_s);
}
