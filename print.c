#include "monty.h"
/**
 * pall - print list
 * @h: list to printed
 */
void pall(stack_t **h)
{
	stack_t *tmp = NULL;
	tmp = *h;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
