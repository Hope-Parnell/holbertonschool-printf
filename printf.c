#include "holberton.h"

/**
 * _printf - a simple clone of the printf standard library function
 * @format: format for the what is to be printed
 *
 * Return: number of bytes printed
 */

int _printf(const char *format, ...)
{
	int bytes, b = 0, f, bc = 0;
	char *buffer;
	va_list vars;

	va_start(vars, format);
	buffer = malloc(1024);
	for (f = 0; format[f] != '\0'; f++)
	{
		if (b = 1024)
			clearBuffer(buffer, &b, &bc); /*write and clear buffer if full*/
		if (format[f] != '%')
		{
			buffer[b] = format[f];
			b++;
		}
		else /*argument flag*/
		{
			f++;
			/*call case fuction*/
			va_arg(vars, int);
		}
	}
	
	write(1, buffer, b);
	bytes = (1024 * bc) + b;
	free(buffer);
	va_end(vars);
	return (bytes);
}
