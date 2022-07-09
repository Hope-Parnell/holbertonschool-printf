#include "main.h"
/**
 * czech_flag - checks flags
 * @vars: variables
 * @flag: flags
 * Return: string to add to buffer
 */

char *czech_flag(va_list vars, char flag)
{
	int i;
	pff_t flags[] = {
		{'i', f_int},
		{'d', f_int},
		{'c', f_char},
		{'s', f_str},
		{'%', f_pct},
		{'\0', NULL}
	};

	for (i = 0; flags[i].flag != '\0'; i++)
	{
		if (flags[i].flag == flag)
			return (flags[i].func(vars));
	}
	return (NULL);
}

/**
 * czech_format - checks the format
 * @format: the format
 * @vars: variable
 * Return: character count
 */

int czech_format(const char *format, va_list vars)
{
	int i, j, ct = 0, buff_ct = 0;
	char buffer[1024], *temp, flag, *free_flags = "idc";

	for (i = 0; format[i] != '\0'; i++)
	{
		if (buff_ct == 1024)
		{
			ct += write(STDOUT_FILENO, buffer, 1024);
			buff_ct = 0;
		}
		if (format[i] == '%')
		{
			flag = format[i + 1];
			if (flag == '\0')
			{
				write(STDOUT_FILENO, buffer, buff_ct);
				return (-1);
			}
			temp = (czech_flag(vars, flag));
			for (j = 0; temp[j] != '\0'; j++)
			{
				if (buff_ct == 1024)
				{
					ct += write(STDOUT_FILENO, buffer, 1024);
					buff_ct = 0;
				}
				buffer[buff_ct++] = temp[j];
			}
			for (j = 0; free_flags[j] != '\0'; j++)
			{
				if (flag == free_flags[j])
				{
					free(temp);
					break;
				}
			}
			i++;
		}
		else
		{
			buffer[buff_ct++] = format[i];
		}
	}
	return (ct + write(STDOUT_FILENO, buffer, buff_ct));
}
/**
 * _printf - prints
 * @format: the format
 * Return: -1 and character count
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
	return (ct);
}
