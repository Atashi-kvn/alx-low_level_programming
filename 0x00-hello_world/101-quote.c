#include <stdio.h>
#include <string.h>
/**
 * main - Prints a new line, to standard error.
 *
 * Return: Always 1.
 */

int main(void)
{
 const char* message = "and that piece of art is useful\" - Dora Korper, 2015-10-19\n";
 write(STDERR_FILENO, message, strlen(message));
	return (1);
}
