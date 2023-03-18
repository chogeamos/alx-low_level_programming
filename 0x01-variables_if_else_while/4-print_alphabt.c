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
    char letter = 'a';
    while (letter <= 'z') 
    {
        if (letter != 'e' && letter != 'q') 
	{
            putchar(letter);
        }
        letter++;
    }
    putchar('\n');
    return 0;
}
