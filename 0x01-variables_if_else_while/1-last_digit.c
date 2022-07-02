#include <stdio.h>

/**
 * main - Prints out different outputs depending on the variable n
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
if (n > 5)
{
	printf("Last string of %d is %d and is greater than 5", n, n);
} else if (n == 0)
{
	printf("Last string of %d is %d and is 0", n, n);
} else if (n < 6 && !0)
{
	printf("Last string of %d is %d and is less than 6 and not 0", n, n);
}
return (0);
}
