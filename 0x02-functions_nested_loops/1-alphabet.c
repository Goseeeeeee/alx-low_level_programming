#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - a function that prints the alphabe
(*
 * Return: Always zero
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;

	}
	_putchar('\n');

}
