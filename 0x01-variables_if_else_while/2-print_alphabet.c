#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet in lower then in uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'a';
	while (c <= 'z'){
		putchar(c);
		c++;
		putchar("\n");
	}
	return 0;
}
