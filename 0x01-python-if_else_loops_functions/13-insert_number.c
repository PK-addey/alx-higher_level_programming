#include <stdlib.h>
#include "lists.h"

/**
* insert_node - inserts a number into a sorted singly linked list
* @head: pointer to the pointer of the first node of the list
* @number: integer to be inserted
* Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_node(listint_t **head, int number)
{
listint_t *new_node, *current, *previous;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = number;
new_node->next = NULL;

if (*head == NULL || (*head)->n >= number)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

current = *head;
previous = NULL;

while (current != NULL && current->n < number)
{
previous = current;
current = current->next;
}

new_node->next = current;
previous->next = new_node;

return (new_node);
}

