#include <stdio.h>
/**
 * main - printing numbers of base 16
 *
 * Return: Always zero
 */

int main(void)
{
	int i;
	char ch;

	for (i = 0 ; i <= 9 ; i++)
		putchar(i + '0');
	for (ch = 'a' ; ch <= 'f' ; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
