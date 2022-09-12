#ifndef MONTY_H
#define MONTY_H


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct monty_info_s - string values lined to the stack
 * @s:string value for instruction in the current line
 * @list: pointer to the list
 */
typedef struct monty_info_s
{
	char *s;
	stack_t *list;
} monty_info_t;


/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(monty_info_t *stack, unsigned int line_number);
} instruction_t;

void push_m(monty_info_t *dlist, unsigned int number);
void pall_m(monty_info_t *dlist, unsigned int number);
void run_command(char *s, unsigned int number, monty_info_t *info);
int read_file(FILE *file_to_read);

#endif
