#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct printf_flags - function for printf flag
 * @flag - printf flag
 * @ func - function to use
 */
typedef struct printf_flags
{
	char flag;
	char *(*func)(va_list);
} pff_t;



int _printf(const char *format, ...);
char *f_char(va_list vars);
char *f_str(va_list vars);
char *f_pct(va_list vars);
char *f_int(va_list vars);

#endif /*HOLBERTON_H*/
