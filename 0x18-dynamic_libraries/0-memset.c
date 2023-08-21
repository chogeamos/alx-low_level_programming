
#include "main.h"

/**

*_memset - Fills a memory area with a specific character:
* The memory area to be filled
 
*@b: The character to be copied

*@n: The number of times to copy 'b'

*Return: Returns a pointer to the memory area 's'
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return (s);
}






