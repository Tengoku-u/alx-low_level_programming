#include "main.h"

/**
 * leet - encodes a string into 1337
 * @c: String
 * Return: string that is encoded
 */

char *leet(char *c)
{
int i = 0;
int j = 0;
char *l = "aAeEoOlLtT";
char *n = "4433001177";

while (*(s + i) != '\0')
{
while (*(l + j) != '\0')
{
if (*(s + i) == *(l + j))
*(s + i)  = *(n + j);
j++;
}
j = 0;
i++;
}
return (s);
}

