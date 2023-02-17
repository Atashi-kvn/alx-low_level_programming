#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*the main function with a void thus no return*/
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
