#include <stdio.h>
/**
 * main - printing alpha in rev
 *
 * Return: Always zero
 */

int main(void)
{
	char ch;

	for (ch = 'z' ; ch >= 'a' ; ch--)
		putchar(ch);
	putchar('\n');

	return (0);
}
