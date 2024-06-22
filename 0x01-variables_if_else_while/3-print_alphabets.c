#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase, and in uppercase
 *
 * Return: Always zero
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
