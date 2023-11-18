#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: input number
 * @y: iterator
 *
 * Return: the square rot of a number
 */
int actual_sqrt_recursion(int n, int y);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses find the natural no.
 * @n: input
 * @y: iterator
 *
 * Return: square root number.
 */

int actual_sqrt_recursion(int n, int y)
{
	if (y * y > n)
		return (-1);
	if (y * y == n)
		return (y);
	return (actual_sqrt_recursion(n, y + 1));
}
