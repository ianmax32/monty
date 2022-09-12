#include "monty.h"
#include <string.h>
#include <stdlib.h>

/**
 * read_filr - function is used to read monty file
 * @file_to_read:the file to read
 * Return:0
 */

int read_file(FILE *file_to_read)
{
	size_t length;
	char *s;
	stack_t *hold, *current;
	unsigned int number;
	monty_info_t *info;

	info = malloc(sizeof(monty_info_t));
	if (!info)
	{
		printf("Error: malloc failed");
		return (EXIT_FAILURE);
	}

	length = 0;
	number = 0;
	s = NULL;
	info->s = NULL;
	info->list = NULL;

	while (getline(&s, &length, file_to_read) != -1)
	{
		run_command(s, number, info);
		++number;
	}

	hold = info->list;
	while (hold)
	{
		current = hold;
		free(current);
		hold = hold->next;
	}

	free(s);
	free(info);
	return (EXIT_SUCCESS);
}
