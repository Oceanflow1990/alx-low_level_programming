#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: n is to calculate natural sqrt
 * Return: natural sqrt
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - function to cal.natural sqrt
 * @n: value para.
 * @i: value para
 * Return: 0 (pass)
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
