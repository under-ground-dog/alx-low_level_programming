#include <stdio.h>
#include "main.h"

/**
*main - biginning of program.
*
*prints 1 to 100
*fizz for multiples of 3
*buzz for multiples of 5
*fizzbuzz for multiples of 3 and 5
*
* Return: 0
*/

int main(void)
{
int i;
for (i = 0; i <= 100; i++)
{
if (i % 3 == 0)
printf("Fizz");

else if (i % 5 == 0)
printf("Buzz");

else if (i % 15 == 0)
printf("FizzBuzz");

else 
printf ("%i", i);
}

printf("\n");
return (0);
}

