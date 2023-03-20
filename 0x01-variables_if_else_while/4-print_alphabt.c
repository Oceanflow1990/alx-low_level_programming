#include <stdio.h>

/**
 * main - prints the alphabet without q and e.
 * Return: always 0 (pass)
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
