#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * positive_or_negative - prints if a number is negative or positive
 * @i: number
 */
void positive_or_negative(int i)
{
        if (i < 0)
        {
                printf("%d is %s\n", i, "negative");
        }
        else if (i > 0)
        {
                printf("%d is %s\n", i, "positive");
        }
        else
        {
                printf("%d is %s\n", i, "zero");
        }
}
