#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - print a senstence before the mai func.
 *
 */

void first(void)
{
printf("You're beat! nad yet, and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}

