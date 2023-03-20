#include <stdio.h>

/**
 * main - print the alphabet.
 *Return: Always 0 (pass)
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
