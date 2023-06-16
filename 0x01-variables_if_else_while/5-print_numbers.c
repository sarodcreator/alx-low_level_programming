Latest commit
aucontraire
aucontraire
Add program to print single digit numbers
6 years ago
History
26 lines (20 loc) · 255 Bytes
File metadata and controls

Code

Blame
#include <stdio.h>

/**
 * main - print single digit numbers
 *
 * Description: print single digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}

	putchar(10);

	return (0);
}

