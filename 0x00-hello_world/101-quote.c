#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - Prints stuff
 * Return: 1 if success.
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 60);
	return (1);
}