#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * _pow_recursion - The function of x raised to the power of y.
 * @x: the base number
 * @y: the exponent function
 * Return: The result of x raised to the y power
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	return (x *= _pow_recursion(x, y - 1));
}
