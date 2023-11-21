#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of a list
 * @head: pointer to the first element
 * @n: data to insert in the new element
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *neww;
listint_t *temp = *head;

neww = malloc(sizeof(listint_t));
if (!neww)
return (NULL);

neww->n = n;
neww->next = NULL;

if (*head == NULL)
{
*head = neww;
return (neww);
}

while (temp->next)
temp = temp->next;

temp->next = neww;

return (neww);
}
