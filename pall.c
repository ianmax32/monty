#include "monty.h"
#include <string.h>
#include <stdlib.h>

/**
 * pall_m-function for printing all the values in the
 * doubly linked list
 * @list:doubly linked list to be printed
 * @number:line numbn
 * Return:0
 */

void pall_m(monty_info_t *dlist, unsigned int number)
{
	stack_t *values;
	(void)number;
	values = dlist->list;
	while (values)
	{
		printf("%i\n", values->n);
		values = values->next;
	}
}
