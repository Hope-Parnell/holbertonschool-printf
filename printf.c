#include "holberton.h"

int czech_format(const char *format, char *buffer, va_list vars)
{
	int f, b = 0, bc = 0;
	for (f = 0; format[f] != '\0'; f++)
    {
		if (b = 1024)
			clearBuffer(buffer, &b, &bc); /*write and clear buffer if full*/
		if (format[f] == '%')
		{
			if (format[f + 1] == '\0')
	    		return(-1);
		}
		else /*argument flag*/
		{
	    	buffer[b] = format[f];
	    	b++;
		}
	}
}
  
  
/**
 * _printf - a simple clone of the printf standard library function
 * @format: format for the what is to be printed
 *
 * Return: number of bytes printed
 */

int _printf(const char *format, ...)
{
	int bytes;
	char *buffer;
	va_list vars;

	va_start(vars, format);
	buffer = malloc(1024);
	if (!buffer)
	  return(-1);
	if (format == NULL)
	  return(-1);
	bytes = czech_format(format, buffer);
	free(buffer);
	va_end(vars);
	return (bytes);
}
