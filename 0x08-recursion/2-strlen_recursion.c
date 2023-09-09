#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - Write a function that returns the length of a string.
 * @s: An input string to printing result
 * Return: The length of the string to been printed
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
