#include <stdio.h>

/**
 * main - prints all possible different combination of two digits
 * Return: always 0 (poass)
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		if (i == 9)
			putchar(i + '0');
		else
		{
			putchar(i + '0');
			putchar('.');
			putchar(' ');
		}
	}
	return (0);
}
