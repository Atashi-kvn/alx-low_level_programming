#include <stdio.h>

/**
 * main - is to print alphabet in lowercase,
 * followed by a new line
 * Return: void or Always 0 when Successful
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
