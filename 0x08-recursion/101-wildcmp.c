#include "main.h"

/**
* no_wild - Returns the length of a string,
* ignoring wildcard characters.
* @str: The string to be measured.
*
* Return: The length.
*/
int no_wild(char *str)
{
	int len = 0, index = 0;

	if (*(str + index))
	{
		if (*str != '*')
			len++;

		index++;
		len += no_wild(str + index);
	}

	return (len);
}

/**
* wild - Iterates through a string located at a wildcard
*                until it points to a non-wildcard character.
* @wildstr: The string to be iterated through.
*/
void wild(char **wildstr)
{
	if (**wildstr == '*')
	{
		(*wildstr)++;
		wild(wildstr);
	}
}

/**
* matching - Checks if a string str matches the postfix of
* another string potentially containing wildcards.
* @str: The string to be matched.
* @postfix: The postfix.
*
* Return: If str and postfix are identical - a pointer to the null byte
* located at the end of postfix.
* Otherwise - a pointer to the first unmatched character in postfix.
*/
char *matching(char *str, char *postfix)
{
	int str_len = no_wild(str) - 1;
	int postfix_len = no_wild(postfix) - 1;

	if (*postfix == '*')
		wild(&postfix);

	if (*(str + str_len - postfix_len) == *postfix && *postfix != '\0')
	{
		postfix++;
		return (matching(str, postfix));
	}

	return (postfix);
}

/**
* wildcmp - Compares two strings, considering wildcard characters.
* @s1: The first string to be compared.
* @s2: The second string to be compared - may contain wildcards.
*
* Return: If the strings can be considered identical - 1.
* Otherwise - 0.
*/
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		wild(&s2);
		s2 = matching(s1, s2);
	}

	if (*s2 == '\0')
		return (1);

	if (*s1 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2));
}
