#include "monty.h"

/**
 * pall_m-function for printing all the values in the
 * doubly linked list
 * @number:current number in the file
 * @list:doubly linked list to be printed
 * Return:0
 */

void pall_m(unsigned int number, monty_info_t *dlist)
{
	stack_t *values;

	values = dlist->stack;
	while (values)
	{
		printf("%i\n", values->n);
		values = values->next;
	}
}
