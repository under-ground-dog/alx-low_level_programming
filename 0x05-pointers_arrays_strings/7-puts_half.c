#include "main.h"

/**
 *puts_half - prints half the string
 *@str: string to be halfed
 *
 *Return: 0
 */

void puts_half(char *str)
{
int i = 0, l = 0, n;

while (str[i++])
l++;

if  ((l % 2) == 0)
n = l / 2;
else
n = (l + 1) / 2;

for (i = n; i < l; i++)
_putchar(str[i]);

_putchar('\n');
}
