#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Function that prints anything
 * @format: let all types of arg passed
 *
 */

void print_all(const char * const format, ...)
{
	int i, check_stat;

	char *str;
	va_list sep;

	va_start(sep, format);

		i = 0;
		while (format != NULL && format[i] != '\0')
		{
			switch (format[i])
			{
				case 'i':
					printf("%d", va_arg(sep, int));
					check_stat = 0;
					break;
				case 'f':
					printf("%f", va_arg(sep, double));
					check_stat = 0;
					break;
				case 'c':
					printf("%c", va_arg(sep, int));
					check_stat = 0;
					break;
				case 's':
					str = va_arg(sep, char *);
					if (str == NULL)
						str = "(nul)";
					printf("%s", str);
					break;
				default:
					check_stat = 1;
					break;
			}
			if (format[i + 1] != '\0' && check_stat == 0)
				printf(", ");
			i++;
		}
		printf("\n");
		va_end(sep);
}
