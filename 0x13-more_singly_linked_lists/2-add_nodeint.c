#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * @head: pointer to the first node in the list
 * @n: data to be added
 * Return: pointer of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *neww;

neww = malloc(sizeof(listint_t));
if (!neww)
return (NULL);

neww->n = n;
neww->next = *head;
*head = neww;

return (neww);
}
