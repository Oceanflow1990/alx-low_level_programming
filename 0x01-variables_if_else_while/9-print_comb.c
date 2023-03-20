#include <stdio.h>

/**
 * main - prints all possible combination os sinle-digit number
 * Return: Alwasy 0 (pass)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar('.');
			putchar('.');
		}
	}
	putchar('\n');
	return (0);
}
