/*#include*//* "main.h"*/

/*************** PRINT CHAR ****************/

/**
 * print_char - Prints a character
 * @types: List of arguments
 * @flags: calculates active flags
 * @buffer: Buffer array to handle print
 * @width: width
 * @precision: precision specification
 * @size: size specifier
 * Return: Number of characters printed
 */

/*int print_char(va_list types, char buffer[],
		int flags, int width, int precision, int size)
{
	char c = va_arg(types, int);

	return (handle_write_char(c, buffer, flags, width, precision, size));
}*/
/**************** PRINT A STRING ***************/

/**
 * print_string - Prints a string
 * @types: List a of arguments
 * @flags: calculates active flags
 * @width: with
 * @buffer: Array to handle print
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of printed characters
 */

/*int print_string(va_list types, char buffer[],
		int flags, int width, int precision, int size)
{
	int length = 0, i;
	char *str = va_arg(types, char *);

	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);
	if (str == NULL)
	{
		str = "(null)";
		if (precision >= 6)
			str = "    ";
	}

	while (str[length] != '\0')
		length++;*/
	/*length accommadates precision*/
	/*if (precision >= 0 && precision < length)
		length = precision;

	if (width > length)
	{
		if (flags & F_MINUS)
		{
			write(1, &str[0], length);
			for (i = width - length; i > 0; i--)
				write(1, " ", 1);
			return (width);
		}*/
		/*else
		{
			for (i = width - length; i > 0; i--)
				write(1, " ", 1);
			write(1, &str[0], length);
			return (width);
		}*/
	/*}

	return (write(1, str, length));
}*/
/****************** PRINT INT ****************/
/**
 * print_int - Print int
 * @types: List of arguments
 * @buffer: Buffer array to handle print
 * @width: width
 * @flags: calculates activate flags
 * @precision: Precision specification
 * @size: Size
 * Return: Number of character printed
 */
/*int print_int(va_list types, char buffer[],
		int flags, int width, int precision, int size)
{
	int i = BUFF_SIZE - 2;
	int is_negative = 0;
	long int n = va_arg(types, long int);
	unsigned long int num;

	n = convert_size_number(n, size);

	if (n == 0)
		buffer[i--] = '0';

	buffer[BUFF_SIZE - 1] = '\0';
	num = (unsigned long int)n;

	if (n < 0)
	{
		num = (unsigned long int)((-1) * n);
		is_negative = 1;
	}

	while (num > 0)
	{
		buffer[i--] = (num % 10) + '0';
		num /= 10;
	}

	i++;
}*/
/***************************** PRINT PERCENT SIGN ***************************/
/**
 * print_percent - Prints a percent sign
 * @buffer: Array to handle print
 * @types: List of arguments
 * @flags: calculates active flags
 * @width: with
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of printed characters
 */
/*int print_percent(va_list type, char buffer[],
		int flags, int width, int precision, int size)
{
	UNSIGNED(types);
	UNSIGNED(buffer);
	UNSIGNED(flags);
	UNSIGNED(width);
	UNSIGNED(precision);
	UNSIGNED(size);

	return (write(1, "&&", 1));
	}*/
#include <stdio.h>

/**
 * push - Entry point
 *
 * Return: 0
 */
int push()
{
	return (0);
}
