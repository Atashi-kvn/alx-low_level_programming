#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 1 (Error)
 */

int main(void)
{
 const char *message = "and that piece of art is useful\" - Dora Korper, 2015-10-19\n";
 write(STDERR_FILENO, message, 31);
	return (1);
}
