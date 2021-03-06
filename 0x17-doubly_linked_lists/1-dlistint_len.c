#include "lists.h"

/**
* dlistint_len - function that returns number of elements in dlistint.
* @h: pointer to traverse list with.
*
* Return: number of elements in a doubly linked list
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t node_counter = 0;
while (h)
{
node_counter++;
h = h->next;
}
return (node_counter);
}
