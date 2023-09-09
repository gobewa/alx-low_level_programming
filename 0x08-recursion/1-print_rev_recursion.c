#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse,
 * and followed by a new line.
 * @s: An input string to printing result
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
