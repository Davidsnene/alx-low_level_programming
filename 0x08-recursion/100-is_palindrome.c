#include "main.h"

/**
* _strlen_recursion - returns the length of a string
* @s: the string to count
*
* Description:
*
* Return: length of the string
*/
int _strlen_recursion(char *s)
{
	if (*s)
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	return (0);
}
/**
* compare_lenght - helper function for is_palindrome
* @str: the string
* @len: length of string
* @count: counter of recursion
*
* Description:
*
* Return: 1 if string is a palindrome, 0 if it is not
*/
int compare_lenght(char *str, int len, int count)
{
	if (count >= len)
		return (1);
	if (str[len] == str[count])
		return (compare_lenght(str, len - 1, count + 1));
	return (0);
}
/**
* is_palindrome - checks if the string is a palindrome
* @s: the string to check
*
* Description:
*
* Return: 1 if string is a palindrome, 0 if it is not.
*/
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	int count = 0;

	return (compare_lenght(s, len - 1, count));
}
