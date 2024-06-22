#include <stdio.h>
/**
 * main - prints from 0 to 9 as intgers
 *
 * Return: Always zero
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar(i + '0');
	putchar('\n');

	return (0);
}
