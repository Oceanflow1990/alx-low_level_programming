#include <stdio.h>

void myStartUpFu(void)__attribute__ ((constructor));

/**
 * myStartUpFun - print a senstence before the mai func.
 *
 */

void myStartUpFun(void)
{
	printf("You're beat! nad yet, and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
