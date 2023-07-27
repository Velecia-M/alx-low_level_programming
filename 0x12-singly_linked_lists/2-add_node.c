#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the list_t list
 * @str: new string to add
 * Return: address of the new element
 * null if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *x;
unsigned int len = 0;

while (str[len])
len++;

x = malloc(sizeof(list_t));
if (!x)
return (NULL);
x->str = strdup(str);
x->len = len;
x->next = (*head);
(*head) = x;
return (*head);
}
