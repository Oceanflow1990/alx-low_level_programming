#include <stdio.h>

/**
 * main - prints all possible combination os sinle-digit number
 * Return: Alwasy 0 (pass)
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10; i++)
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
