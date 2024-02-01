#include "monty.h"

/**
 * f_pop - remove top node from stack
 * @head: pointer to pointer of first node
 * @counter: line counter
 *
 * Return: none
 */
void f_pop(stack_t **head, unsigned int counter)
{
    if (*head == NULL)
    {
        fprintf(stderr, "L%u: can't pop an empty stack\n", counter);
        exit(EXIT_FAILURE);
    }

    stack_t *temp = *head;
    *head = (*head)->next;
    if (*head)
        (*head)->prev = NULL;
    free(temp);
}

/**
 * f_pint - print top node on stack
 * @head: pointer to pointer of first node
 * @counter: line counter
 *
 * Return: none
 */
void f_pint(stack_t **head, unsigned int counter)
{
    if (*head == NULL)
    {
        fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
        exit(EXIT_FAILURE);
    }

    printf("%d\n", (*head)->n);
}

/**
 * f_nop - do nothing
 * @head: pointer to pointer of first node
 * @counter: line counter
 *
 * Return: none
 */
void f_nop(stack_t **head, unsigned int counter)
{
    (void)head;
    (void)counter;
}
