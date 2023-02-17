#include <stdio.h>

/**
 * main function - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Returns: Aways 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
