#include <stdio.h>
/**
 * main - print alphabets except q and e
 *
 * Return: Always zero
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	putchar('\n');

	return (0);
}
