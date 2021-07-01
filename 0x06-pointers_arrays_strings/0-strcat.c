#include "holberton.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings.
 * @dest:  destination string.
 * @src:  source string.
 *
 * Return: dest if successful.
 */

char *_strcat(char *dest, char *src);
{
  int a;
  int i;
  a = -1;
  for (i = 0; dest[i] != '\0'; i++);
  do {
    a++;
    dest[i] = src[a];
    i++;
  } while (src[a] != '\0');
 return (dest);
}
