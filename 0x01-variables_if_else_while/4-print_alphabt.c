#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prtins the alphabet without q and e.
 * return always 0 (pass)
 */
int main(void)
{
	int i;

	for (i = 97; 1 < 123; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
