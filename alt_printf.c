#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>
#define BUFFSIZE 1024
/**
 * _printf - printf like function
 * @format: format to be followed
 * Return: formatted printf
 */
int _printf(const char *format, ...)
{
	int char_like_c, in;
	char *s;
	int a = 0;
	char BUFFER[BUFFSIZE];

	va_list list;

	if (format == NULL)
		return (-1);
	if (strcmp(format, "% ") == 0)
		return (-1);
	if (strcmp(format, "%\0") == 0)
		return (-1);
	if (strcmp(format, "%@") == 0)
		return (-1);

	va_start(list, format);

	while (format[a])
	{
	       	if (format[a] == '%')
		{
			a++;
			switch (format[a])
			{
				case 'c':
					char_like_c = va_arg(list, int);/*argument retrieved*/
					write (1, &char_like_c, 1);
					break;
				case 'i':
					in = va_arg(list, int);
					int_to_strchar(in, BUFFER);
					write (1, BUFFER, man_length(BUFFER));
					break;
				case 'd':/*same as 'i'*/
					in = va_arg(list, int);
					int_to_strchar(in, BUFFER);
					write (1, BUFFER, man_length(BUFFER));
					break;
				case 's':
					s = va_arg(list, char *);
					write (1, s, man_length(s));
					break;
			}
		}
		else
		{
			write(1, &format[a], 1);
		}
		a++;
	}
	va_end(list);
	return (0);
}
