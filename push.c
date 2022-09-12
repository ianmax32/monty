#include "monty.h"
#include <string.h>
#include <stdlib.h>

/**
 * push_m-function for the opcode push in monty language
 * @dlist:double liinked list to be pushed to
 * @number:line number
 * Return:0
 */

void push_m(monty_info_t *dlist, unsigned int number)
{
	stack_t *new_value;
	int value_added;
	char *str_token;

	str_token = __strtok_r(NULL, "\n ", &dlist->s);
	if (!str_token)
	{
		printf("L<%i>:usage: push integer\n", number);
		exit(EXIT_FAILURE);
	}

	value_added = atoi(str_token);
	new_value = malloc(sizeof(stack_t));
	if (!new_value)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_value->prev = NULL;
	new_value->next = NULL;
	new_value->n = value_added;

	if (dlist->list)
	{
		dlist->list->prev = new_value;
		new_value->next = dlist->list;
	}
	dlist->list = new_value;
}
