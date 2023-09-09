#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int _strlen_recursion(char *s);
int helper_palindrome(char *s, int len);

/**
 *_strlen_recursion - A function used to check the length of the string
 * @s:By reducing from wright string and
 * Return: Incrementing the left string.
 */

int _strlen_recursion(char *s)
{
	if (!*s)

	return (0);

	else

	return (_strlen_recursion(s + 1) + 1);
}

/**
 * is_palindrome - Check the palindrome string
 * @s: An equal string length
 * Return: 1 if string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len <= 1)
		return (1);
	return (helper_palindrome(s, len));
}

/**
 * helper_palindrome - A function which checks the reversed string
 * @s: An input string is increment from left
 * @len: the length of the string s
 * Return: A reverse string
 */
int helper_palindrome(char *s, int len)
{
	if (len <= 1)
		return (1);
	else if (*s == *(s + len - 1))
	{
		return (helper_palindrome(s + 1, len - 2));
	}
	else
		return (0);

}
