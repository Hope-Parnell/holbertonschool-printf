#include "holberton.h"

int czech_flag(va_list vars, int ct, char flag)
{
	switch (flag)
	{
	case 'c':
		return (prt_char(ct, va_arg(vars, int)));
	case 's':
		return (prt_str(ct, va_arg(vars, char *)));
	case '%':
		return (prt_pct(ct));
	case 'i': case 'd':
		return (prt_int(ct, va_arg(vars, int)));
	default:
		ct += write(1, "%", 1);
		ct += write(1, &flag, 1);
		return (ct);
	}
}

int czech_format(const char *format, va_list vars)
{
	int i, ct = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			ct = (czech_flag(vars, ct, format[i + 1]));
			i++;
		}
		else
		{
			write(1, &format[i], 1);
			ct++;
		}
	}
	(void)vars;
	return (ct);
}
/**
 * @brief 
 * 
 */

int _printf(const char *format, ...)
{
	int ct = 0;
	va_list vars;

	if (!format)
		return (-1);
	va_start(vars, format);

	ct = czech_format(format, vars);
	va_end(vars);
	return(ct);
}
