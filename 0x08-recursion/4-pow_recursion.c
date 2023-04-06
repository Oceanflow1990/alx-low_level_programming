#include "main.h"
#include <stdio.h>

/**
 * _sqrt - function that returns the value of x raised to the power of y.
 * @n: number to cal. then sqrt
 * @i: iterate number
 * Return: the natural sqrt
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
