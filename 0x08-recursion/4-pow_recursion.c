#include "main.h"

/**
 * _pow_recursion - print x exponent y
 * @x: the base
 * @y: the exponent/index
 *
 * Return: the value of x exp y
 * -1 if the exponent is negative
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0 || x == 1)
	{
		return (1);
	}
	else if (x == 0)
	{
		return (0);
	}
	return (x * _pow_recursion(x, y - 1));
}
