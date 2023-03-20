#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prtins the alphabet without q and e.
 * return always 0 (pass)
 */
int main(void)
{
	char i;
	
	for (i = 'a' ; <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);

	putchar('\n');
	return (0);
}
