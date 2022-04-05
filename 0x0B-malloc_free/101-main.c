#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_tab - Prints an array of string
* @tab: The array to print
*
* Return: nothing
*/

void print_tab(char **tab)
{
int i;

for (i = 0; tab[i] != NULL; ++i)
{
printf("%s\n", tab[i]);
}
}

/**
* main - calls function to split string to words.
*
* Return: 1 if an error occurred, 0 otherwise
*/
int main(void)
{
char **tab;

tab = strtow("      Holberton School         #cisfun      ");
if (tab == NULL)
{
printf("Failed\n");
return (1);
}
print_tab(tab);
return (0);
}
