#include <stdio.h>

/**
 * main fuction - is to print alphabet in lowercase,
 * followed by a new line
 * Returns: void or Always 0 when Successful
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
