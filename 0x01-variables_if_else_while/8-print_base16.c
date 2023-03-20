#include <stdio.h>

/**
 * main - prtins number between 0 to  9 and lettrs between a to f.
 * Return: Always 0 (pass)
 */
int main(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (j = 'a' ; j <= 'f' ; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
