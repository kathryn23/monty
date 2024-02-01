#include "monty.h"

/**
* addnode - add node to top of stack
* @head: first node
* @n: new value
*
* Return: none
*/

void addnode(stack_t **head, int n)
{
	stack_t *new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (*head)
		(*head)->prev = new_node;

	new_node->n = n;
	new_node->prev = NULL;
        new_node->next = (*head) ? *head : NULL;
	
        *head = new_node;
}
