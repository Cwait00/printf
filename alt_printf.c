#include "main.h"
#include <stdio.h>
#include <unistd.h>
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
	int b = 0;

	va_list list;

	if (format == NULL)
		return (-1);
	if (format == "% ")
		return (-1);
	if (format == "%\0")
		return (-1);
	if (format == "%@")
		return (-1);

	while (s[b] != '\0')
	{
		b++;/*tracks length of string*/
	}

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
					in = atoi(va_arg(list, int));
					write (1, &in, 1);
					break;
				case 'd':/*same as 'i'*/
					in = va_arg(list, int);
					write (1, &in, 1);
					break;
				case 's':
					s = va_arg(list, char *);
					write (1, s, b++);
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
