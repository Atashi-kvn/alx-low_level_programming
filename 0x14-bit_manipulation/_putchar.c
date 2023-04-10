#include "main.h"
#include <unistd.h>

/**

    my_putchar - writes the character c to stdout
    @c: The character to be printed
    Description: This function writes a single character c to the standard output (stdout).
    It returns 1 on success, and -1 on error, with the errno variable set appropriately.
    */
int _putchar(char c){
	return (write(1, &c, 1));
}
