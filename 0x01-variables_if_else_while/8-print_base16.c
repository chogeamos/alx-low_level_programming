#include <stdio.h>
/**
 * main - print if the number is positive, zero, or negative
 *
 * Description: using the main function
 * This program prints "Programming is positive, zero, or negative
 * Return: 0
 */
int main(void)
{
char c;
for (c = '0'; c <= '9'; c++)
{
	putchar(c);
}
for (c = 'a'; c <= 'f'; c++)
{
	putchar(c);
}
putchar('\n');
return (0);
}
