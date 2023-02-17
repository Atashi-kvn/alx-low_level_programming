#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Printing the last digit of a randomly generated number
 *        and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/*the coditions for logical choice*/
if (n > 0)
{
printf("%d is positive\n", n);
}
if (n < 0)
{
printf("%d is negative\n", n);
}
if (n == 0)
{
printf("%d is zero\n", n);
}
return (0);
}
