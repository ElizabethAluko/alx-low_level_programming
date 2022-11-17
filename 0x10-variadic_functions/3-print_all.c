#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	char *str;
	char ar[] = "cifs";
	va_list p;

	va_start(p, format);
	i = 0;
	while (format && format)
	{
		j = 0;
		while (ar[j])
		{
			if (format[i] == ar[j])
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(p, int));
				break;
			case 'i':
				printf("%d", va_arg(p, int));
				break;
			case 'f':
				printf("%f", va_arg(p, int));
				break;
			case 's':
				str = va_arg(p, char *);
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		} i++;
	}
	va_end(p);
	printf("\n");
}
