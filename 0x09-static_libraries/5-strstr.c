#include "main.h"

/**
 * _strstr - Entry point
 * @heycheck: input
 * @needle: input value
 *
 * Return: always 0
 */

char *_strstr(char *heycheck, char *needle)
{
	for (; *heycheck != '\0'; heycheck++)
	{
		char *i = heycheck;
		char *p = needle;

		while (*i == *p && *p != '\0')
		{
			i++;
			p++;
		}
			if (*p == '\0')
				return (heycheck);
	}
	return (0);
}
