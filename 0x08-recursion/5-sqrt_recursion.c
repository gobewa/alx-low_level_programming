#include "main.h"
#include <stdio.h>
int _sqrt(int prev, int root);

/**
 * _sqrt_recursion - Returns the square root of number.
 * @n: an input integer n.
 * Return: The square root of n integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(1, n));
}

/**
 * _sqrt - find square root of integer
 * @prev: previous value of the root
 * @root: square root value of returns
 * Return: the square root of  integer number
 */
int _sqrt(int prev, int root)
{
	if (prev > root)
		return (-1);
	else if (prev * prev == root)
		return (prev);
	return (_sqrt(prev + 1, root));
}
