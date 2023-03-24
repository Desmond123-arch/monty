#include "monty.h"
/**
 * push - pushes an element to the stack
 * @stack: pointer to the stack variable
 * @line_number: line number incase of error 
 *
 */
void push(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
    stack_t *new = malloc(sizeof(stack_t));
    new->n = number;
    new->next = NULL;
    new->prev = NULL;
    if (new == NULL)
    {
        fprintf(stderr, "Error: malloc failed");
        exit(EXIT_FAILURE);
    }
    else if (*stack == NULL) /*Begining of stack*/
    {
        *stack = new;
        return;
    }
        (*stack)->prev = new;
        new->next = *stack;
        *stack = new;
}
