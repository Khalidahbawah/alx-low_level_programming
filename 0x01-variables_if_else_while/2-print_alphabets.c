#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char k = 'a';

	if (k <= 'z')
	{
		putchar(k);
		k++;
	}
	putchar('\n');
	return (0);
}
