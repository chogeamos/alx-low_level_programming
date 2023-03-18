#include <stdio.h>
/**
 * main - print if the number is positive, zero, or negative
 *
 * Description: using the main function
 * This program prints "Programming is positive, zero, or negative
 * Return: 0
 */
int main() 
{
    int num = 0;
    while (num < 10)
    {
        putchar(num + '0');
        num++;
    }
    putchar('\n');
    return 0;
}
