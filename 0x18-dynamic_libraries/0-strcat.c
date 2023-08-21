#include "main.h"

/**
*_strcat - Concatenates two strings
*@dest: String to which the other string will be appended
*@src: String to be added
*Return: A pointer to the resulting concatenated string
*/
 char *_strcat(char *dest, char *src)
  {
      int i, j;

               i = 0;
               j = 0;

                 while (dest[i] != '\0')
                 i++;

                 while (src[j] != '\0')
                    {      
                      dest[i] = src[j];
                      j++;
                      i++;
                    }

                      dest[i] = '\0';

         return (dest);
}
