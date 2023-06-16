#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 122;

	while (n > 96)
	{
		putchar(n);
		n--;
	}
	putchar(10);

	return (0);
}
