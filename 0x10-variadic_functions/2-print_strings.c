#include "variadic_functions.h"


/**
 * print_strings - prints with separator
 * @separator: the string separator
 * @n: the number of arguments
 * @...: the strings to print
 *
 * Ruterns: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *str;
	va_list ap;

	if (!n)
	{
		print("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		print("%s%s", (str = va_arg(ap, char *)) ? str : "(nil)".
				i ? (separator ? separator : "") : "\n");
	va_end(ap);
}
