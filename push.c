#include "monty.h"
/**
 * _push - push number into list
 * @h: head of list
 * @n: number to br pushed
 */
void _push(stack_t **h, int n)
{
	stack_t *list;

list  = malloc(sizeof(stack_s));
	if (!list)
	{
	printf("Error: malloc failed");
	}
	list->n = n;
	if (*h == NULL)
	{
		*h = list;
		list->next = NULL;
		list->prev = NULL;
	}
	else /* insert to front */
	{
		list->next = *h;
		(*h)->prev = list;
		*h = list;
	}
}
