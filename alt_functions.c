#include "main.h"

/**
 * man_length - manually calculates length and prints it
 * @s: string
 * Return: length
 */
int man_length(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * Int_to_strchar - prints strings that were integers, one character
 * a time.
 * @nr: number/ integer to change to char
 * to create a string
 * @string_remainder: output created by each nr changed into char
 * Return: string_remainder
 */
void int_to_strchar(int nr, char *string_remainder)
{
	int remainder;
	int a;

	for (a = 0; nr > 0; a++)/*can also use the while loop*/
	{
		string_remainder[a] = '0' + remainder;
		nr = nr / 10;/*moves to the next number*/
		remainder = nr % 10;/*also is the last number of nr*/
	}
	string_remainder[a] = '\0';
}
