#include "monty.h"

/**
 * run_command - function is used to execute the command read from
 * the monty file
 * @s:command that has to be executed
 * @number:current line number in the file
 * @info:the structure of the monty_info_t
 * Return:0
 */

void run_command(char *s, unsigned int number, monty_info_t *info)
{
	char *str_token;
	instruction_t *instuction;
	instruction_t commands[] = {
		{"pall", pall_m},
		{"push", push_m},
		{NULL, NULL}
	};

	str_token = strtok(s, "\n", &info->s);
	if (!str_token)
	{
		printf("Error: string tokenizer");
	}

	instruction = commands;
	while (instruction->opcode)
	{
		if (strcmp(instruction->opcode, str_token) == 0)
		{
			instruction->f(info, number);
			return;
		}
		++instruction;
	}
}
