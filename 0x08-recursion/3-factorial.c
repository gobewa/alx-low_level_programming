#include "main.h"
#include <stdio.h>

/**
 * factorial - a function which returns the factorial of a n number.
 * @n: An input integer
 * Return: The factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
