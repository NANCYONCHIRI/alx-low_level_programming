#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint_end - adds a new node at the end of listint_t list
 * @head: pointer to the first node
* @n: node to add
* Return: the address of the new element, or NULL if fail
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newNode, *currentNode;

newNode = malloc(sizeof(listint_t));
if (newNode == NULL)
return (NULL);
newNode->n = n;
newNode->next = NULL;

if (*head == NULL)
{
*head = newNode;
return (*head);
}
currentNode = *head;
while (currentNode->next != NULL)
currentNode = currentNode->next;
currentNode->next = newNode;
return (*head);
}
