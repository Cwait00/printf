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
	va_list list;

	if (format == NULL)
		return (-1);
	if (strcmp(format, "% ") == 0 || strcmp(format, "%\0") == 0)
		return (-1);
	va_start(list, format);
	while (format[a] != '\0')
	{
		if (format[a] == '%')
		{
			a++;
			if (format[a] == '%')
			{/*write to std output*/
				write(1, &format[a], 1);
			}
			switch (format[a])
			{
				case 'c':
					char_like_c = va_arg(list, int);/*argument retrieved*/
					write(1, &char_like_c, 1);
					break;
				case 'i':
				case 'd':
					in = va_arg(list, int);
					write(1, &in, sizeof(int));/*use size of*/
					break;
				case 's':
					s = va_arg(list, char *);
					write(1, s, man_length(s));
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

